#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);


    std::cout << "short int: " << sizeof(short) << " tavua\n";
    std::cout << "unsigned short int: " << sizeof(unsigned short) << " tavua\n";
    std::cout << "int: " << sizeof(int) << " tavua\n";
    std::cout << "unsigned int: " << sizeof(unsigned int) << " tavua\n";
    std::cout << "long int: " << sizeof(long) << " tavua\n";
    std::cout << "unsigned long int: " << sizeof(unsigned long) << " tavua\n";
    std::cout << "long long int: " << sizeof(long long) << " tavua\n";
    std::cout << "unsigned long long int: " << sizeof(unsigned long long) << " tavua\n";

    return 0;

}