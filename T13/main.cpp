#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    double C;
    double F;
    char valinta;


while (true) { // loops until correct choice is made
    cout << "Jos haluat muuntaa Celcius->Fahrenheit paina C tai Fahrenheit->Celcius paina F" << endl;
    cin >> valinta;

    if (valinta == 'C' || valinta == 'c') { // Celcius -> Fahrenheit looppi
        cout << setprecision(2) << fixed; // Määritellään syötteelle 2 desimaalia
        cout << "Syötä lämpötila Celcius-asteina: " << endl;
        cin >> C;
        cout << "Sama lämpötila Fahrenheit-asteina on: " << (9.0/5.0)*C+32 << endl;
    }

    else if (valinta == 'F' || valinta == 'f') { // Fahrenheit -> Celcius looppi
        cout << setprecision(2) << fixed; // Määritellään syötteelle 2 desimaalia
        cout << "Syötä lämpötila Fahrenheit-asteina: " << endl;
        cin >> F;
        cout << "Sama lämpötila Celcius-asteina on: " << (F-32)/(9.0/5.0) << endl;
    }
    else { // Virheellinen syöte
        cout << "Virheellinen valinta!"<< endl;
        continue; // jatkaa looppia
    }
    break; // pysäyttää loopin oikealla valinnalla
}

    return 0;

}