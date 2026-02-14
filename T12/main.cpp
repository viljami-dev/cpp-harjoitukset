#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    const double hinta = 19.90;
    int lkm;
    double total;

    cout << setprecision(2) << fixed; // Määritellään syötteelle 2 desimaalia
    std::cout << "Anna tuotteiden lukumäärä: ";
    cin >> lkm;
    total = lkm * hinta;
    std::cout << "Tuote-erän hinta on: " << total << " euroa." << endl;

    return 0;

}