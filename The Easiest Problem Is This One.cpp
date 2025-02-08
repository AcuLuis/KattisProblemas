#include <iostream>
#include <vector>
using namespace std;

int retorna_minimo(int numero) {
    int numero_minimo = 11;
    int suma_original = 0;
    int temp = numero;

    while (temp != 0) {
        suma_original += temp % 10;
        temp /= 10;
    }
    while (true) {
        int producto = numero * numero_minimo;
        int suma_producto = 0;
        int aux = producto;

        while (aux != 0) {
            suma_producto += aux % 10;
            aux /= 10;
        }
        if (suma_producto == suma_original) {
            return numero_minimo;
        }
        numero_minimo++;
    }
}

int main() {
    vector<int> numeros;
    int input;
    while (true) {
        cin >> input;
        if (input == 0) break;
        numeros.push_back(input);
    }
    for (int i = 0; i < numeros.size(); i++) {
        cout << retorna_minimo(numeros[i]) << endl;
    }

    return 0;
}
