#include <iostream>
#include <semaphore>
#include <chrono>
#include <thread>

std::counting_semaphore<10> semaphore(3);

void worker(int id) {
    semaphore.acquire();
    std::cout << "Thread " << id << " acquired semaphore\n";
    sleep(2);
    semaphore.release();
    std::cout << "Thread " << id << " released semaphore\n";
}

int main() {
    std::thread t1(worker, 1);
    std::thread t2(worker, 2);
    std::thread t3(worker, 3);
    std::thread t4(worker, 456);
    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}
