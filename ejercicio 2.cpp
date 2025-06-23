#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char frase[100];
    cout << "Ingresa una frase: ";
    cin.getline(frase, 100);
    char *palabra = strtok(frase, " ");
    while (palabra != NULL) {
        cout << palabra << endl;
        palabra = strtok(NULL, " ");
    }
    return 0;
}

