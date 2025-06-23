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

    // Invertir el vector
    cout << "\nVector invertido:\n";
    for (int i = n - 1; i >= 0; i--) {
        cout << vec[i] << " ";
    }

    cout << endl;
    return 0;
}

