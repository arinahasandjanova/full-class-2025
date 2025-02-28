#include <iostream>
union student {
    int age;
    float averageScore;
    char* name;
};

int main() {
    /*student Sahib;
    Sahib.age = 15;
    std::cout << "Sahib's age " << Sahib.age << "\n";
    Sahib.averageScore = 2.5;
    std::cout << "Sahib's averageScore " << Sahib.averageScore << "\n";
    Sahib.name = "Sahib";
    std::cout << "Sahib's name " << Sahib.name << "\n";
    std::cout << "Sahib's averageScore " << Sahib.averageScore << "\n";*/

    student Sahib;
    std::cout << "Address 1:  " << &Sahib.age << "\n";
    std::cout << "Address 2:  " << &Sahib.averageScore << "\n";
    std::cout << "Address 3:  " << &Sahib.name << "\n";
    std::cout << "Size:  " << sizeof(Sahib) << "\n";

    return 0;
}
