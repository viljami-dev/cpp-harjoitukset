#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    int ika;
    int num;

    cout << "Syötä ikäsi: ";
    cin >> ika;
    if (ika>=18) {
        do {
            cout << "Oletko rekisteröity äänestäjä (1 kyllä, 0 ei)";
            cin >> num;


            if (num==1) {
                cout << "Olet oikeutettu äänestämään.";
            }
            else if (num==0) {
                cout << "Et ole oikeutettu äänestämään.";
            }
            else {
                cout << "Syötä joko (1 kyllä, 0 ei)";
                cin >> num;
            }
        } while (num!=1 && num!=0); // do silmukka jatkuu kunnes annetaan kelvollinen syöte
    }
    else {
        cout << "Et ole oikeutettu äänestämään.";
    }



    return 0;

}