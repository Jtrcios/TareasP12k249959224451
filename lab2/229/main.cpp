#include <iostream>

using namespace std;

int main()
{
    cout << "Entero\tCuadrado\tCubo" << endl;

    // Calcular y mostrar los cuadrados y cubos de los enteros del 0 al 10
    for (int i = 0; i <= 10; ++i) {
        int cuadrado = i * i;
        int cubo = i * i * i;
        cout << i << "\t" << cuadrado << "\t\t" << cubo << endl;
    }

    return 0;
}
