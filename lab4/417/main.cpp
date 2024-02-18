#include <iostream>
using namespace std;

int main() {
    int cont = 1;
    int n;
    int M = 0;

    while (cont <= 10) {
        cout << "Ingrese un numero " << contador << ": ";
        cin >> n;

        if (cont == 1) {
            M = n;
        } else if (n > M) {
            M = n;
        }

        cont++;
    }

    cout << "El número más grande es: " << M << endl;

    return 0;
}
