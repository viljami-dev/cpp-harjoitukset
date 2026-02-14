
#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

// määrittelee tulostusasetukset riippuen taulukon koosta 0,1,2 tai 3+
void tulosta_lista_suomeksi(const int* luvut, int size) {
    if (size <= 0) {
        cout << "(tyhjä)";
        return;
    }
    if (size == 1) {
        cout << luvut[0];
        return;
    }
    if (size == 2) {
        cout << luvut[0] << " ja " << luvut[1];
        return;
    }
    // size >= 3
    for (int i = 0; i < size; ++i) {
        cout << luvut[i];
        if (i < size - 2) {
            cout << ", ";
        } else if (i == size - 2) {
            cout << " ja ";
        }
    }
}

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    const int SIZE = 6;
    int luvut[SIZE] = {100, 20, 3, 49, 55, 96};

    // Etsitään min ja max
    int pienin = luvut[0];
    int suurin = luvut[0];
    for (int i = 1; i < SIZE; ++i) {
        if (luvut[i] < pienin) pienin = luvut[i];
        if (luvut[i] > suurin) suurin = luvut[i];
    }

    cout << "Taulukon sisältö on: ";
    tulosta_lista_suomeksi(luvut, SIZE);
    cout << "\n\n";
    cout << "Pienin arvo: " << pienin << "\n\n";
    cout << "Suurin arvo: " << suurin << "\n";
}
