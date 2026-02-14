
#include <iostream>
using namespace std;

int main() {
    constexpr int SIZE=5;                   // Määritellään taulokon koko käyttäen muuttujaa
    int taulukko[SIZE] = {1, 2, 3, 4, 5};
    int* osoitin = taulukko;                  // Osoitin

    // Kasvatetaan luvut
    for (int i = 0; i < SIZE; ++i) {
        *(osoitin + i) = *(osoitin + i) + 1;        // Valitaan taulukon solu ja lisätään siihen 1
    }

    // Tulostetaan taulukko käyttäen vain osoitinta
    for (int i = 0; i < SIZE; ++i) {
        cout << *(osoitin + i);
        if (i < SIZE - 1) cout << ' ';          // Lisää välilyönnin kaikkiin muihin paitsi viimeiseen lukuun
    }
    cout << endl;

    return 0;
}