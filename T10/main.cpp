#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    int sivu1, sivu2, sivu3;

    cout << "Anna kolmion sivujen pituudet " << endl;
    cin >> sivu1; cout << endl;
    cin >> sivu2; cout << endl;
    cin >> sivu3; cout << endl;

    if (sivu1 <= 0 || sivu2 <= 0 || sivu3 <= 0) {
        cout << "Virhe sivujen pituuksien pitää olla positiivisia" << endl;
    } else {
        cout << "Kolmion piirin pituus on " << sivu1+sivu2+sivu3 << endl;
    }


    return 0;

}