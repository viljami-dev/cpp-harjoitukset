#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
// #include <chrono> tätä voisi käyttää myös //

using namespace std;

// karkausivuosi true/false
bool Karkausvuosi(int vuosi){
    return (vuosi % 4 == 0 && (vuosi % 100 != 0 || vuosi % 400 == 0));
}
// switch operaattori antaa päivien lukumäärän
int pluku(int vuosi, int kuukausi){
switch (kuukausi){
    // Case 1,3,5,7,8,10 ja 12 eli 31 päiväiset yhdessä//
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;

    // Case 4,6,9 ja 11 eli 30 päiväiset yhdessä //
    case 4: case 6: case 9: case 11:
        return 30;

        // Case 2 Helmikuu karkausvuodet
    case 2:
        return Karkausvuosi(vuosi) ? 29 : 28;
    default:
        return -1; // virheellinen arvo
}
}

// syöte alkaa
int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);
    int vuosi;
    int kuukausi;

// taulukko jonka avulla kuukauden numerosta saadaan sen nimi (Kiitos Copilot)
    string kuukaudet[] = {
        "tammikuu", "helmikuu", "maaliskuu", "huhtikuu",
        "toukokuu", "kesäkuu", "heinäkuu", "elokuu",
        "syyskuu", "lokakuu", "marraskuu", "joulukuu"
    };

// käyttäjä syöte
    cout << "Anna kuukausi (1-12): ";
    cin >> kuukausi;
    cout << "Anna vuosi: ";
    cin >> vuosi;

    int paivat=pluku(vuosi,kuukausi);

// if lauseke ensin tarkastetaan onko virheellinen syöte ja sitten tulostetaan Vuosi kuukausi ja päivät mikäli syöte oikea
    if (paivat== -1) {
        cout << kuukausi <<" Ei ole oikea kuukausi!";
    }
    else if (vuosi < 0 || vuosi > 2030) {
        cout << vuosi <<" on virheellinen vuosiluku, sen pitää olla väliltä 0-2030!";
    }
    else {
        cout<< "Vuoden "<< vuosi << " " << kuukaudet[kuukausi -1] << "ssa on " << paivat << " päivää.";
    }

    return 0;

}