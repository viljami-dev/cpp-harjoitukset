#include <fstream>
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;



string haenimi(){
    string kayttaja;
    ifstream tiedosto("kayttaja.txt");

    if (tiedosto.is_open()) { // hakee nimen tiedostosta kayttaja.txt
        getline(tiedosto, kayttaja);
        tiedosto.close();
    }
    else { // jos tiedostoa ei ole pyytää käyttäjän nimen
        cout << "Syötä käyttäjän nimi.";
        getline(cin, kayttaja);

        ofstream kirjoita("Kayttaja.txt");
        kirjoita << kayttaja;
        kirjoita.close();
    }
    return kayttaja;
}

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    string kayttaja = haenimi(); // kutsuu funktiota haenimi

    cout << "Hei, " << kayttaja << "!" << endl;

    return 0;

}