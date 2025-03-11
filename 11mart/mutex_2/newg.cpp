#include <mutex>
#include <iostream>

std::mutex mtx;

void task_guard() {
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Captured resource\n";
}

void task_unique() {
    std::unique_lock<std::mutex> lock(mtx);
    std::cout << "Captured resource\n";
    lock.unlock();
}

void task_defer() {
    std::unique_lock<std::mutex> lock(mtx, std::defer_lock);
    std::cout << "Captured resource\n";
    //многопоточный код
    lock.lock();
    //однопоточный код
    lock.unlock();
    //многопоточный код
}