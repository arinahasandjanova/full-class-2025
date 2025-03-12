#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <thread>


int main() {
    long long sum = 0;
    std::vector<int> rand(100000);
    std::srand(std::time(0));
    for(int& num: rand) {
        num = 1 + std::rand()%10; //мин 1 макс 10
    }
    clock_t start = clock();
    for(int& num: rand) {
        sum+=num;
    }
    clock_t end = clock();
    double dur = double(end-start)/CLOCKS_PER_SEC;
    std::cout << "1 used " << dur << " seconds\n";

    return 0;
}
