#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    double summa;
    double arvosana[3];

    for (int i = 0; i < 3; i++) { // Määritellään looppi joka kysyy 3 lukua, jos luku ei ole väliltä 0-5 pyydetään uusi syöte.
        std::cout << "Syötä arvosana (0-5): " << i +1 << " ";
        std::cin >> arvosana[i];

        while (arvosana[i] < 0 || arvosana[i] > 5) {
            std::cout << "Arvosanan oltava väliltä 0-5 " << i + 1 << " ";
            std::cin >> arvosana[i];
        }

        summa = summa + arvosana[i]; // Lasketaan annetut luvut yhteen
    }

    double keskiarvo = summa / 3; // Lasketaan keskiarvo

    cout << "Annoit arvosanat: ";
    for (int i = 0; i < 3; i++) { // looppi tulostaa annetut syötteet.
        std::cout << arvosana[i] << " ";
    }

    cout << setprecision(2) << fixed; // Määritellään syötteelle 2 desimaalia
    std::cout << std::endl << "Arvosanojen keskiarvo on: " <<  keskiarvo;
    return 0;

}