#include <iostream>
using namespace std;

int main() {
    int numeroBinario;
    int digito;
    int posicion = 1;
    int equivalenteDecimal = 0;

    // Ingresar número binario
    cout << "Por favor ingrese un número binario: ";
    cin >> numeroBinario;

    // Convertir número binario a decimal
    while (numeroBinario != 0) {
        // Obtener el último dígito del número binario
        digito = numeroBinario % 10;

        // Agregar el valor posicional al equivalente decimal
        equivalenteDecimal += digito * posicion;

        // Dividir el número binario por 10 para obtener el próximo dígito
        numeroBinario /= 10;

        // Incrementar la posición para el siguiente dígito
        posicion *= 2;
    }

    // Imprimir el equivalente decimal
    cout << "Su equivalente decimal es: " << equivalenteDecimal << endl;

    return 0;
}
