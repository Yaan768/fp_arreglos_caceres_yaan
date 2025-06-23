#include <iostream>
#include <vector>
using namespace std;

// Función que verifica si el vector está ordenado
bool estaOrdenado(const vector<int>& vec) {
    for (int i = 0; i < vec.size() - 1; i++) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "¿Cuantos elementos tendra el vector?: ";
    cin >> n;

    vector<int> arreglo(n);
    cout << "Ingresa los " << n << " numeros:\n";
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];
    }

    if (estaOrdenado(arreglo)) {
        cout << "\nEl vector esta ordenado de forma ascendente." << endl;
    } else {
        cout << "\nEl vector NO esta ordenado." << endl;
    }

    return 0;
}

