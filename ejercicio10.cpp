#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

// Calcular la media
double calcularMedia(const vector<int>& vec) {
    double suma = 0;
    for (int val : vec)
        suma += val;
    return suma / vec.size();
}

// Calcular la mediana
double calcularMediana(vector<int> vec) {
    sort(vec.begin(), vec.end());
    int n = vec.size();
    if (n % 2 == 0)
        return (vec[n/2 - 1] + vec[n/2]) / 2.0;
    else
        return vec[n/2];
}

// Calcular la moda (valor que más se repite)
int calcularModa(const vector<int>& vec) {
    int maxRepeticiones = 0, moda = vec[0];
    for (int i = 0; i < vec.size(); i++) {
        int rep = 1;
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec[i] == vec[j]) {
                rep++;
            }
        }
        if (rep > maxRepeticiones) {
            maxRepeticiones = rep;
            moda = vec[i];
        }
    }
    return moda;
}

int main() {
    srand(time(0)); // Inicializar semilla aleatoria
    const int TAM = 30;
    vector<int> numeros(TAM);

    // Generar números aleatorios entre 100 y 1000
    for (int i = 0; i < TAM; i++) {
        numeros[i] = rand() % 901 + 100; // (100 a 1000)
    }

    // Mostrar números generados
    cout << "Números generados:\n";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << "\n\n";

    // Calcular estadísticas
    double media = calcularMedia(numeros);
    double mediana = calcularMediana(numeros);
    int moda = calcularModa(numeros);

    // Mostrar resultados
    cout << "Media: " << media << endl;
    cout << "Mediana: " << mediana << endl;
    cout << "Moda (aproximada): " << moda << endl;

    return 0;
}

