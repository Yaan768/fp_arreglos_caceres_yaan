#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

double calcularMedia(const vector<int>& vec) {
    double suma = 0;
    for (int i = 0; i < vec.size(); i++)
        suma += vec[i];
    return suma / vec.size();
}

double calcularMediana(vector<int> vec) {
    sort(vec.begin(), vec.end());
    int n = vec.size();
    if (n % 2 == 0)
        return (vec[n/2 - 1] + vec[n/2]) / 2.0;
    else
        return vec[n/2];
}

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
    srand(time(0));
    const int TAM = 30;
    vector<int> numeros(TAM);

    for (int i = 0; i < TAM; i++) {
        numeros[i] = rand() % 901 + 100;
    }

    cout << "Numeros generados:\n";
    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }
    cout << "\n\n";

    double media = calcularMedia(numeros);
    double mediana = calcularMediana(numeros);
    int moda = calcularModa(numeros);

    cout << "Media: " << media << endl;
    cout << "Mediana: " << mediana << endl;
    cout << "Moda (aproximada): " << moda << endl;

    return 0;
}


