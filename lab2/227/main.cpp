#include <iostream>

using namespace std;

int main()
{
     char caracter;

    // Leer un carácter del teclado
    cout << "Ingrese un caracter: ";
    cin >> caracter;

    // Imprimir el equivalente entero del carácter
    cout << "El equivalente entero de '" << caracter << "' es: " << static_cast<int>(caracter) << endl;

    return 0;
}
