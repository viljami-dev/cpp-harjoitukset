#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    cout << fixed << setprecision(1);
    cout << left << setw(12) << "Fahrenheit" << setw(12) << "Celsius" << endl;
    cout << "--------------------" << endl;

    for (double f = 0.0; f <= 20.0; f += 1.0) {
        double celcius = fahrenheitToCelsius(f);
        cout << left << setw(12) << f << setw(12) << celcius << endl;
    }

    return 0;
}
