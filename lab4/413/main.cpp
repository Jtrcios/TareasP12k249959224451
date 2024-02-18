#include <iostream>
using namespace std;

int main() {
    int Km, L;
    double TKm = 0;
    double TL = 0;

    cout << "Ingrese los Km conducidos y los litros usados en cada viaje (ingrese -1 para terminar):\n";

    while (true) {
        cout << "Km conducidos (-1 para terminar): ";
        cin >> Km;

        // terminar el programa
        if (Km == -1)
            break;

        cout << "Litros usados: ";
        cin >> L;

        // Actualizar los totales
        TKm += Km;
        TL += L;

        // Total de Km por litro obtenidos hasta el momento
        if (TL != 0) {
            double promedio = TKm / TL;
            cout << "Total de Km por Litro: " << promedio << endl;
        } else {
            cout << "Aún no hay suficientes datos para calcular los Km por L." << endl;
        }
    }

    cout << "Programa finalizado." << endl;

    return 0;
}
