#include <iostream>

using namespace std;

int main()
{
     char caracter;

    // Leer un car�cter del teclado
    cout << "Ingrese un caracter: ";
    cin >> caracter;

    // Imprimir el equivalente entero del car�cter
    cout << "El equivalente entero de '" << caracter << "' es: " << static_cast<int>(caracter) << endl;

    return 0;
}
