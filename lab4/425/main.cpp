#include <iostream>
using namespace std;

int main() {
    int lado;

    // Solicitar al usuario el tamaño de los lados del cuadrado
    cout << "Ingrese el tamaño de los lados del cuadrado (en un rando del 1 al 20): ";
    cin >> lado;

    // Verificar si el tamaño del lado es válido
    if (lado < 1 || lado > 20) {
        cout << "El tamaño del lado esta fuera del rango." << endl;
        return 1;
    }

    // Dibujar el cuadrado
    for (int i = 1; i <= lado; ++i) {
        for (int j = 1; j <= lado; ++j) {
            if (i == 1 || i == lado || j == 1 || j == lado) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        // Salto de línea al final de cada fila
        cout << endl;
    }

    return 0;
}
