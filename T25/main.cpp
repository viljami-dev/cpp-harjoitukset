#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

bool onkoAlkuluku(int n) {
    if (n <= 1) return false; // 0 ja 1 eivät voi olla alkulukuja

    for (int i=2; i<n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    int luku;
    cout <<"Anna luku: ";
    cin >> luku;

    if (onkoAlkuluku(luku))
        cout << luku << " on alkuluku";

    else
        cout << luku << " ei ole alkuluku";

    return 0;

}