#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    double luku1, luku2;
    int valinta;

    cout<<"Anna kaksi numeroa: ";
    cin>>luku1;
    cin>>luku2;
    cout<<endl <<"Valitse laskutoimitus:" << endl;
    cout << "1: Lisää: \n" << "2: Vähennä: \n" << "3: Kertolasku: \n" << "4: Jakolasku: \n";
    cin>>valinta;

    switch (valinta) {
        case 1:
            cout << "Yhteenlaskun tulos on: " << luku1+luku2;
            break;
        case 2:
            cout << "Vähennyslaskun tulos on: " << luku1-luku2;
            break;
        case 3:
            cout << "Kertolaskun tulos on: " << luku1*luku2;
            break;
        case 4:
            cout << "Jakolaskun tulos on: " <<  luku1/luku2;
            break;
        default:
            cout << "Tuntematon valinta!";
    }


    return 0;

}