#include <iostream>
using namespace std

int main() {
    double ventasBrutas;

    cout << "Ingrese las ventas brutas del vendedor (-1 para terminar): ";
    cin >> ventasBrutas;

    while (ventasBrutas != -1) {
        // Calcular los ingresos del vendedor
        double ingresos = 200 + (0.09 * ventasBrutas);

        // Mostrar los ingresos del vendedor
        cout << "Los ingresos del vendedor son: $" << ingresos << endl;

        // Solicitar las ventas brutas del siguiente vendedor
        cout << "\nIngrese las ventas brutas del siguiente vendedor (-1 para terminar): ";
        cin >> ventasBrutas;
    }

    cout << "Programa terminado." << endl;

    return 0;
}
