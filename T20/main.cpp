#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int laskuri =0;
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    for (int i=0; i<=127; i++ ){
        cout << char(i);
        laskuri++;
        if (laskuri % 10 == 0) { // Asettelee tulostukset 10 merkin riveihin
            cout << endl;
        }
}
    return 0;

}