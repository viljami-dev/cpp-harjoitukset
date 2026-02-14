#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

// Viittausparametrit
int teeJotain(int &x, int &y)
{
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y; // 10 * (alkuperäinen x + alkuperäinen y)
}

// Osoitinparametrit (ylikuormitus)
int teeJotain(int* x, int* y)
{
    if (x == nullptr || y == nullptr) {
        return 0;
    }
    int temp = *x;
    *x = (*y) * 10;
    *y = temp * 10;
    return *x + *y;
}

int main()
{
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    // --- Testi 1: viittausversio ---
    int a = 5;
    int b = 10;
    cout << "Viittausversio:\n" "teeJotain(" << a << ", " << b << ") ";
    int sRef = teeJotain(a, b);
    cout << "palauttaa " << sRef << "\n";
    cout << "teeJotain(" << &a << ", " << &b << ") palauttaa " << sRef << "\n\n";

    cout << "Kutsun jälkeen a=" << a << " b=" << b << " (odotus: a=100, b=50)\n\n";

    // Palautetaan alkuarvot uutta testiä varten
    a = 5;
    b = 10;

    // --- Testi 2: osoitinversio ---
    cout << "Osoitinversio:\n"<< "teeJotain(" << a << ", " << b << ") ";
    int sPtr = teeJotain(&a, &b);
    cout << "palauttaa " << sPtr << "\n";
    cout << "Osoitinversio: teeJotain(" << &a << ", " << &b << ") palauttaa " << sPtr << "\n\n" ;

    cout << "Kutsun jälkeen a=" << a << " b=" << b << " (odotus: a=100, b=50)\n";

    return 0;
}
