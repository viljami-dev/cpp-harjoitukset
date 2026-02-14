#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);
    // vuosiluku syöttö
    double years;

    std::cout << "Anna vuosien lukumäärä ";
    std::cin >> years;

    // päivien määrä
    double days;

    days = years * 365.0;
    std::cout << "Antamiisi vuosiin sisältyy " << days << " päivää." << endl;
    return 0;

}