#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos numeros deseas ingresar?: ";
    cin >> n;

    vector<int> arreglo(n);
    cout << "Ingresa los " << n << " numeros:\n";
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];
    }

    int sumaPositivos = 0, sumaNegativos = 0;

    for (int i = 0; i < n; i++) {
        if (arreglo[i] >= 0)
            sumaPositivos += arreglo[i];
        else
            sumaNegativos += arreglo[i];
    }

    cout << "\nSuma de elementos positivos: " << sumaPositivos << endl;
    cout << "Suma de elementos negativos: " << sumaNegativos << endl;

    return 0;
}

