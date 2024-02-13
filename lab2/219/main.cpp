#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Introduzca tres enteros distintos: ";
    cin >> num1 >> num2 >> num3;

    // Calculando la suma
    int suma = num1 + num2 + num3;

    // Calculando el promedio
    double promedio = suma / 3.0;

    // Calculando el producto
    int producto = num1 * num2 * num3;

    // Encontrando el menor
    int menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    // Encontrando el mayor
    int mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }

    // Imprimiendo los resultados
    cout << "La suma es " << suma << endl;
    cout << "El promedio es " << promedio << endl;
    cout << "El producto es " << producto << endl;
    cout << "El menor es " << menor << endl;
    cout << "El mayor es " << mayor << endl;

    return 0;
}
