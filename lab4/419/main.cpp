#include <iostream>
using namespace std;

int main() {
    int cont = 1;
    int n;
    int m1 = 0;
    int m2 = 0;

    while (cont <= 10) {
        cout << "Ingrese el número " << cont << ": ";
        cin >> n;

        if (n > m1) {
            m2 = m1;
            m1 = n;
        } else if (n > m2) {
            m2 = n;
        }

        cont++;
    }

    cout << "Los dos números más grandes son: " << m1 << " y " << m2 << endl;

    return 0;
}
