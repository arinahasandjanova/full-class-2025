#include <iostream>
#include <thread>
#include <chrono>

void print_hello() {
    std::cout << "Hello skz\n";
}

int main() {
    //std::thread normal_thread(print_hello);
    std::jthread normal_jthread(print_hello);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    return 0;
}