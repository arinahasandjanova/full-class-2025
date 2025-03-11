#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex tmtx;
void task (int id) {
    std::cout << "Thread " << id << " tries to acquire lock\n";
    std::unique_lock<std::timed_mutex> lock(tmtx, std::defer_lock);
    if(lock.try_lock_for(std::chrono::seconds(2))) {
        std::cout << "Thread " << id << " acquired lock\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        std::cout << "Thread " << id << " releases lock\n";
    } else {
        std::cout << "Thread " << id << " failed to acquire lock\n";

    }
}
int main() {
    std::thread t1(task, 1);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::thread t2(task, 2);
    t1.join();
    t2.join();
    return 0;
}