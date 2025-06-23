#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "¿Cuantos nombres deseas ingresar?: ";
    cin >> n;
    cin.ignore(); // Limpia el enter

    vector<string> nombres(n);

    for (int i = 0; i < n; i++) {
        cout << "Nombre " << i + 1 << ": ";
        getline(cin, nombres[i]);
    }

    sort(nombres.begin(), nombres.end());

    cout << "\nNombres ordenados alfabeticamente:\n";
    for (int i = 0; i < n; i++) {
        cout << nombres[i] << endl;
    }

    return 0;
}


