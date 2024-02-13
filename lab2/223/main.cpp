#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;

    // Leer cinco enteros del usuario
    cout << "Ingrese cinco enteros: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Suponemos que el primer número es el menor y el mayor
    int menor = num1;
    int mayor = num1;

    // Comparar con los otros números para encontrar el menor y el mayor
    if (num2 < menor) {
        menor = num2;
    }
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    if (num4 < menor) {
        menor = num4;
    }
    if (num4 > mayor) {
        mayor = num4;
    }
    if (num5 < menor) {
        menor = num5;
    }
    if (num5 > mayor) {
        mayor = num5;
    }

    // Imprimir el menor y el mayor
    cout << "El menor de los cinco enteros es: " << menor << endl;
    cout << "El mayor de los cinco enteros es: " << mayor << endl;

    return 0;
}
