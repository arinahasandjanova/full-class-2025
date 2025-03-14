#include <condition_variable>
#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>

std::mutex m;
std::condition_variable cv;
std::string data;
bool ready = false;
bool processed = false;

void worker_thread() {
    std::this_thread::sleep_for(std::chrono::seconds(1)); //deadlock с другими //
    std::cout << "Worker thread started\n";
    std::unique_lock lk(m);//wait только для unique_lock
    cv.wait(lk, []{return ready;});
    //cv.wait(lk); deadlock
    std::cout << "Worker thread in process\n";
    data += " after processing";
    processed = true;
    std::cout << "Worker thread signals processing complete\n";
    lk.unlock();
    cv.notify_one();
}

void master_thread() {
    std::cout << "Master thread started\n";
    data = "Example data";
    {
        std::lock_guard lk(m);
        ready = true;
        std::cout << "Master thread signals data is ready for processing\n";
    }
    cv.notify_one();
    {
        std::unique_lock lk(m);
        cv.wait(lk, []{return processed;});
        //cv.wait(lk); deadlock
    }
    std::cout << "\nmaster thread again Data = " << data << "\n";
}

int main() {
    std::thread worker(worker_thread);
    std::thread master(master_thread);
    worker.join();
    master.join();

    return 0;
}
