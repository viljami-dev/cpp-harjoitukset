#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int koko=10; // määritellään kolmion koko jotta sitä voidaan muuttaa

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);
    // kärki vasen yläkulma
    for (int i = 1; i <= koko; i++) {
        for (int j = 1; j < i; j++) {
            cout << "*";
        }
    cout << endl;
    }
    cout << endl;
    // kärki vasen alakulma
    for (int i = koko; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            if (j <=i)
            cout << "*";
        else
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    // kärki oikea yläkulma
    for (int i = 1; i <= koko; i++) {
        for (int j = 1; j <=koko; j++) {
            if (j >=koko -i +1)
            cout << "*";
            else
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    // kärki oikea alakulma
    for (int i = koko; i >= 1; i--) {
        for (int j = 1; j <=koko; j++) {
            if (j >= koko -i +1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;

}