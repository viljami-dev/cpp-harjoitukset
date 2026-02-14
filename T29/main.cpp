#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;


#include <iostream>
using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    int luku = 5;
    int* osoitin = &luku; // Osoitin, joka osoittaa yllä olevaan kokonaislukuun

    // Tulostetaan arvo
    cout << "Alkuperäinen arvo: " << *osoitin << "\n\n";

    // Muutetaan arvo 10:ksi
    *osoitin = 10;

    // Tulostetaan muutettu arvo
    cout << "Muutettu arvo: " << *osoitin << endl;

    return 0;
}
