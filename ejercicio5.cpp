#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "¿Cuantos numeros deseas ingresar?: ";
    cin >> n;

    vector<int> numeros(n);
    cout << "Ingresa los " << n << " numeros:\n";
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];
    int repMayor = 0, repMenor = 0;

    // Encontrar mayor y menor
    for (int i = 0; i < n; i++) {
        if (numeros[i] > mayor) mayor = numeros[i];
        if (numeros[i] < menor) menor = numeros[i];
    }

    // Contar repeticiones
    for (int i = 0; i < n; i++) {
        if (numeros[i] == mayor) repMayor++;
        if (numeros[i] == menor) repMenor++;
    }

    cout << "\nMayor: " << mayor << " (se repite " << repMayor << " veces)" << endl;
    cout << "Menor: " << menor << " (se repite " << repMenor << " veces)" << endl;

    return 0;
}

