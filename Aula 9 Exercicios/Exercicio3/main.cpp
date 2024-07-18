#include <iostream>

using namespace std;

void mostrarNumeroImpares(int *n, int *n2) {
    if (*n < *n2) {
        for (int i = *n; i <= *n2; i++) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
        }
    } else if (*n > *n2) {
        for (int i = *n2; i <= *n; i++) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
        }
    } else { // Se os números forem iguais e ímpares
        if (*n % 2 != 0) {
            cout << *n << " ";
        }
    }
}

int main() {
    int n1, n2;
    cout << "Digite dois numeros: ";
    cin >> n1 >> n2;

    mostrarNumeroImpares(&n1, &n2);
    cout << endl;
    system("PAUSE");
    return 0;
}

