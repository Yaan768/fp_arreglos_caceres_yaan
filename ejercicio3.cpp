#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char frase[100];
    char letra;
    cout << "Ingresa una frase: ";
    cin.getline(frase, 100);
    cout << "Letra a buscar: ";
    cin >> letra;
    int contador = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == letra)
            contador++;
    }
    cout << "La letra '" << letra << "' aparece " << contador << " veces." << endl;
    return 0;
}

