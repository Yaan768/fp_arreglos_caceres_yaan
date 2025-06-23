#include <iostream>
#include <cstring>
using namespace std;

void capitalizar(char str[]) {
    bool espacio = true;
    for (int i = 0; str[i] != '\0'; i++) {
        if (espacio && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            espacio = false;
        } else {
            str[i] = tolower(str[i]);
        }
        if (str[i] == ' ')
            espacio = true;
    }
}

int main() {
    char frase[100] = "caceres patrimonio de la humanidad";
    capitalizar(frase);
    cout << frase << endl;
    return 0;
}

