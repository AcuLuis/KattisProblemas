#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long convertirABase(long numero, long base) {
    vector<long> aux;
    if (numero == 0) {
        return 0;
    }
    while(numero > 0) {
        long digito = numero % base;
        aux.push_back(digito);
        numero /= base;
    }
    reverse(aux.begin(), aux.end());
    long suma=0;
    for(long c: aux){
        suma+=(c*c);
    }
    return suma;
}
int main() {
    int n = 0;
    cin >> n;
    vector<pair<int, long>> pares;
    for (int i = 0; i < n; i++) {
        long k = 0, base = 0, numero = 0;
        cin >> k >> base >> numero;
        long cambio = convertirABase(numero, base);
        pares.push_back({k, cambio});
    }
    for (const auto& pair : pares) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}
