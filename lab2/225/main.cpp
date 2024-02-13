#include <iostream>

using namespace std;

int main()
{
     int num1, num2;

    // Leer dos enteros del usuario
    cout << "Ingrese dos enteros: ";
    cin >> num1 >> num2;

    // Determinar si num1 es múltiplo de num2
    if (num2 != 0 && num1 % num2 == 0) {
        cout << num1 << " es multiplo de " << num2 << endl;
    } else {
        cout << num1 << " no es múltiplo de " << num2 << endl;
    }

    return 0;
}
