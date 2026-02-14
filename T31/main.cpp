
#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

// Allokoi kokonaislukutaulukon annetulla koolla ja palauttaa osoittimen.
// Palauttaa nullptr, jos koko on 0 tai allokointi epäonnistuu.
int* varaa_taulukko(std::size_t koko) {
    if (koko == 0) {
        return nullptr;
    }
    // nothrow: jos allokointi epäonnistuu, palautetaan nullptr eikä heitetä poikkeusta
    int* p = new (std::nothrow) int[koko];
    return p; // voi olla nullptr, jos muisti loppui
}

// Täyttää taulukon: alkiolle i asetetaan arvo i (osoitinaritmetiikkaa käyttäen).
void paivita_taulukko_indekseilla(int* p, std::size_t koko) {
    if (p == nullptr) return;
    for (std::size_t i = 0; i < koko; ++i) {
        *(p + i) = static_cast<int>(i);
    }
}

// Tulostaa taulukon sisältö
void tulosta_taulukko(const int* p, std::size_t koko) {
    if (p == nullptr) return;
    std::cout << "Taulukon sisältö on:\n\n";
    for (std::size_t i = 0; i < koko; ++i) {
        std::cout << "Alkiolla " << i << " on arvo " << *(p + i) << "\n\n";
    }
}

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    std::size_t koko = 0;
    int* taulukko = nullptr; // osoitin on aluksi tyhjä

    // Pyytää taulukon koon ja lopettaa virhe tilanteessa
    std::cout << "Anna taulukon koko: ";
    if (!(std::cin >> koko)) {
        std::cerr << "Virhe: syöte ei ollut kelvollinen kokonaisluku.\n";
        return 1;
    }

    // Allokointi aliohjelmassa
    taulukko = varaa_taulukko(koko);

    if (taulukko == nullptr) {
        if (koko == 0) {
            std::cout << "\nTaulukon sisältö on:\n\n"; // tyhjä taulukko; ei tulostettavaa
            // ei muistia vapautettavaa, osoitin pidetään nullptr:na
            return 0;
        }
            std::cerr << "Muistinvaraus epäonnistui.\n";
            return 1;
    }

    // Päivitetään sisällöt osoitinta käyttäen
    paivita_taulukko_indekseilla(taulukko, koko);

    std::cout << "\n";
    // Tulostetaan osoitinta käyttäen
    tulosta_taulukko(taulukko, koko);

    // Vapautetaan muisti ja nollataan osoitin
    delete[] taulukko;
    taulukko = nullptr;

    return 0;
}