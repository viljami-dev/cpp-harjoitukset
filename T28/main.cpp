
#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    const int SIZE = 5;
    int luvut[SIZE] = {13, 59, 52, 10, 98};

    // Tulostetaan alkuperäinen sisältö
    cout << "Taulukon alkuperäinen sisältö: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << luvut[i];
        if (i < SIZE - 1) cout << ' ';
    }
    cout << '\n';

    // Käännetään taulukko
    for (int i = 0; i < SIZE / 2; ++i) {
        int temp = luvut[i];                   // tallennetaan alkupäänarvo talteen
        luvut[i] = luvut[SIZE - 1 - i];        // siirretään loppupäästä alkupäähän
        luvut[SIZE - 1 - i] = temp;            // palautetaan alkuperäinen numero loppupäähän
    }

    // Tulostetaan käännetty sisältö
    cout << "Taulukon käännetty sisältö: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << luvut[i];
        if (i < SIZE - 1) cout << ' ';
    }
    cout << '\n';

    return 0;
}