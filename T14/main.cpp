#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);
    double luku1;
    double luku2;

    bool result;

    cout << "Anna kaksi kokonaislukua: ";
    cin >> luku1;
    cin >> luku2;

    if (luku1 > luku2) {
        cout << "Ensimmäinen luku on suurempi kuin toinen.";
        }
    else {
        cout << "Toinen luku on suurempi kuin ensimmäinen.";
    }

    return 0;

}