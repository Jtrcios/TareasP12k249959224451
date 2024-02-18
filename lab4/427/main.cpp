#include <iostream>
using namespace std;

int main() {
    int numeroBinario;
    int digito;
    int posicion = 1;
    int equivalenteDecimal = 0;

    // Ingresar n�mero binario
    cout << "Por favor ingrese un n�mero binario: ";
    cin >> numeroBinario;

    // Convertir n�mero binario a decimal
    while (numeroBinario != 0) {
        // Obtener el �ltimo d�gito del n�mero binario
        digito = numeroBinario % 10;

        // Agregar el valor posicional al equivalente decimal
        equivalenteDecimal += digito * posicion;

        // Dividir el n�mero binario por 10 para obtener el pr�ximo d�gito
        numeroBinario /= 10;

        // Incrementar la posici�n para el siguiente d�gito
        posicion *= 2;
    }

    // Imprimir el equivalente decimal
    cout << "Su equivalente decimal es: " << equivalenteDecimal << endl;

    return 0;
}
