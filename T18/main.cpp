#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);
int syote=10; // määritellään aloitusarvo
    while (10<=syote){
    cout << "Anna numero (pienempi kuin 10 lopettaaksesi):";
        cin >> syote;
    }
    return 0;

}