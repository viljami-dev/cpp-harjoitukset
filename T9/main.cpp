
#include <iostream>
#include <windows.h>
#include <string>

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    std::string A = "0xA";
    std::string B = "0xB";
    std::string C = "0xC";
    std::string D = "0xD";
    std::string E = "0xE";
    std::string F = "0xF";

    int desimaaliA = std::stoi(A, nullptr, 16); // Muunto 16-järjestelmästä //
    int desimaaliB = std::stoi(B, nullptr, 16);
    int desimaaliC = std::stoi(C, nullptr, 16);
    int desimaaliD = std::stoi(D, nullptr, 16);
    int desimaaliE = std::stoi(E, nullptr, 16);
    int desimaaliF = std::stoi(F, nullptr, 16);

    std::cout << "Lukua " << A << " vastaava 10-järjestelmänluku " << desimaaliA << std::endl;
    std::cout << "Lukua " << B << " vastaava 10-järjestelmänluku " << desimaaliB << std::endl;
    std::cout << "Lukua " << C << " vastaava 10-järjestelmänluku " << desimaaliC << std::endl;
    std::cout << "Lukua " << D << " vastaava 10-järjestelmänluku " << desimaaliD << std::endl;
    std::cout << "Lukua " << E << " vastaava 10-järjestelmänluku " << desimaaliE << std::endl;
    std::cout << "Lukua " << F << " vastaava 10-järjestelmänluku " << desimaaliF << std::endl;

    return 0;
}
