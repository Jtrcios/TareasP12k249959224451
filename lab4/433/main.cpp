#include <iostream>
using namespace std;

int main() {
    int L1, L2, L3;

    // Solicitar al usuario que ingrese los tres lados del triángulo
    cout << "Ingrese la longitud del 1er lado del triángulo: ";
    cin >> L1;

    cout << "Ingrese la longitud del 2do lado del triángulo: ";
    cin >> L2;

    cout << "Ingrese la longitud del 3er lado del triángulo: ";
    cin >> L3;

    // Verificar si los lados pueden formar un triángulo rectángulo
    if ((L1 * L1 + L2 * L2 == L3 * L3) ||
        (L1 * L1 + L3 * L3 == L2 * L2) ||
        (L2 * L2 + L3 * L3 == L1 * L1)) {
        cout << "Los lados si pueden formar un triángulo rectángulo." << endl;
    } else {
        cout << "Los lados no pueden formar un triángulo rectángulo." << endl;
    }

    return 0;
}
