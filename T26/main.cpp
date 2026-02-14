
#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    const int SIZE = 5;
    int luvut[SIZE] = {1, 2, 3, 4, 5};

    int summa = 0;

    // Käytetään SIZE muuttujaa silmukassa
    for (int i = 0; i < SIZE; ++i) {
        summa += luvut[i];
    }

    cout << "Taulukon alkioiden ";
    for (int i = 0; i < SIZE; ++i) {
        cout << luvut[i];
        if (i < SIZE - 1) cout << ", ";
    }
    cout << " summa on " << summa << "." <<  endl;

    return 0;

}