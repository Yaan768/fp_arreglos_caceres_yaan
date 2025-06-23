#include <iostream>
#include <vector>
using namespace std;

bool esCapicua(const vector<int>& numero) {
    int i = 0, j = numero.size() - 1;
    while (i < j) {
        if (numero[i] != numero[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string entrada;
    cout << "Ingresa un numero de 10 cifras: ";
    cin >> entrada;

    if (entrada.length() != 10) {
        cout << "El numero debe tener exactamente 10 cifras." << endl;
        return 1;
    }

    vector<int> digitos(10);
    for (int i = 0; i < 10; i++) {
        if (!isdigit(entrada[i])) {
            cout << "Entrada inválida. Solo se permiten dígitos." << endl;
            return 1;
        }
        digitos[i] = entrada[i] - '0';
    }

    if (esCapicua(digitos)) {
        cout << "El numero es capicua." << endl;
    } else {
        cout << "El numero no es capicua." << endl;
    }

    return 0;
}


