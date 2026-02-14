#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    const double PI = 3.14159265358979323846;
    const double RADIUS = 2;
    int exponent = 3;
    int radius2 = RADIUS * RADIUS;

    cout << "Ympyrän kehän pituus: " << 2*PI*RADIUS << endl;
    cout << "Ympyrän pinta-ala: " << PI*radius2 << endl;

    return 0;

}