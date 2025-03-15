#include <iostream>
#include <atomic>
#include <thread>
void add(int a, int b, std::atomic<int>* result) {
    for(int i = a; i != b; ++i) {
        //*result += i;
        result->fetch_add(i);//+=
    }
}

int main() {
    //int shared = 0;
    std::atomic<int> shared = 0;
    std::thread addingThread(add, 1, 100, &shared);
    std::cout << shared.load() << "\n";
    while(!addingThread.joinable()) {
        std::cout << shared.load() << "\n";
    }
    addingThread.join();

    return 0;
}
