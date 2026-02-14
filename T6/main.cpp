#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {
    // Asetetaan konsolin koodaus UTF-8:ksi
    SetConsoleOutputCP(CP_UTF8);

    string first_name, last_name;
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    cout << first_name << " " << last_name << endl;

    return 0;

}