#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;



int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    for(int i=0; i<=10; i++) {
        cout << "Numero: " << i << " Neliöjuuri " << sqrt(i) << endl;
    }

    return 0;

}