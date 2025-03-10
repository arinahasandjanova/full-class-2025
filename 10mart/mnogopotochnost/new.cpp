#include <iostream>
#include <thread>

void foo(int z) {
    for(int i=0; i!=z; ++i) {
        std::cout << "Thread using function foo\n";
    }
}

class thread_object {
public:
    void operator()(int x) {
        for(int i=0; i!=x; ++i) {
            std::cout << "Thread using thread_object\n";
        }
    }
};

class Base {
public:
    void foo() {
        std::cout << "Thread using member function foo()\n";
    }
    static void foo1() {
        std::cout << "Thread using static member function foo1()\n";
    }
};

int main() {
    std::thread th1(foo, 3);
    std::thread th2(thread_object(), 3);
    auto f = [](int x) {
        for(int i = 0; i!=x; ++i) {
            std::cout << "Thread using lanbds\n";
        }
    };
    std::thread th3(f, 3);
    Base b;
    std::thread th4(&Base::foo, &b);
    std::thread th5(&Base::foo1);
    th1.join();
    th2.join();
    th3.join();
    th4.join();
    th5.join();

    return 0;
}