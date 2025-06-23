#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "¿Cuantos numeros deseas ingresar?: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Ingresa los " << n << " numeros:\n";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int sumaPar = 0, sumaImpar = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            sumaPar += vec[i]; // índice par
        else
            sumaImpar += vec[i]; // índice impar
    }

    cout << "\nSuma de elementos en indices pares: " << sumaPar << endl;
    cout << "Suma de elementos en indices impares: " << sumaImpar << endl;

    return 0;
}

