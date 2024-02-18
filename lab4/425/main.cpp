#include <iostream>
using namespace std;

int main() {
    int lado;

    // Solicitar al usuario el tama�o de los lados del cuadrado
    cout << "Ingrese el tama�o de los lados del cuadrado (en un rando del 1 al 20): ";
    cin >> lado;

    // Verificar si el tama�o del lado es v�lido
    if (lado < 1 || lado > 20) {
        cout << "El tama�o del lado esta fuera del rango." << endl;
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
        // Salto de l�nea al final de cada fila
        cout << endl;
    }

    return 0;
}
