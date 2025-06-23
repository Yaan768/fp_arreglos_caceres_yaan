#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "¿Cuantos elementos tendra el vector?: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Ingresa los " << n << " numeros:\n";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Guardar el último elemento
    int ultimo = vec[n - 1];

    // Desplazar todos los elementos a la derecha
    for (int i = n - 1; i > 0; i--) {
        vec[i] = vec[i - 1];
    }

    // Poner el último al inicio
    vec[0] = ultimo;

    // Mostrar vector rotado
    cout << "\nVector rotado a la derecha:\n";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }

    cout << endl;
    return 0;
}

