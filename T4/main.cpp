#include <iostream>
using namespace std;

int main() {

    // variables
    int n1, n2;

    // User inputs
    std::cout << "Anna 1. kokonaisluku ";
    std::cin >> n1;

    std::cout << "Anna 2. kokonaisluku ";
    std::cin >> n2;

    // Calculate +,-,*,/
    int summa = n1 + n2;
    std::cout << "Yhteenlaskun tulos: " << summa << endl;

    int erotus = n1 - n2;
    std::cout << "Vähennyslaskun tulos: " << erotus << endl;

    int tulo = n1 * n2;
    std::cout << "Kertolaskun tulos: " << tulo << endl;

    int jako = n1 / n2;
    std::cout << "Jakolaskun tulos: " << jako << endl;

    return 0;
}