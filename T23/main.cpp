#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

bool onkopariton(int luku) {
    return luku % 2 == 0;
}

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);
    int syote;

    cout << "Anna luku: ";
    cin >> syote;
    if (onkopariton(syote)) {
        cout << "Luku " << syote << " on parillinen." << endl;
    }
    else {
            cout << "Luku " << syote << " on pariton." << endl;
        }


    return 0;

}