#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>
using namespace std;


std::string separarDigitos(int numero) {
    // Convierte el número en una cadena de caracteres
    std::ostringstream stream;
    stream << numero;
    std::string numeroStr = stream.str();

    // Convierte cada dígito en un elemento de la cadena y luego únelos con espacios
    std::string digitosSeparados;
    for (size_t i = 0; i < numeroStr.length(); ++i) {
        digitosSeparados += numeroStr[i];
        if (i < numeroStr.length() - 1) {
            digitosSeparados += ' ';
        }
    }

    return digitosSeparados;
}


bool comprueba(char numeros[18]) {
    bool val = false;
    size_t lon = strlen(numeros);
    for (int i = 0; i < lon; i++) {
        if (numeros[i] != ' ') {
            int m = numeros[i] - '0';
            if (m < 0 || m > 9) {
                val = true;
            }
        }
    }
    return val;
}

int main() {
    int casos = 0;
    bool val = false;
    vector<int> elementos;

    cin >> casos;
    cin.ignore();

    if (casos >= 1 && casos <= 10) {
        for (int i = 0; i < casos * 2; i++) {
            char numeros[18];
            cin.getline(numeros, 18, '\n');
            if (comprueba(numeros)) {
                val = true;
                cout << val;
            } else {
                string forma;
                size_t lon = strlen(numeros);
                for (int j = 0; j < lon; j++) {
                    if (numeros[j] != ' ') {
                        forma = forma + numeros[j];
                    }
                }
                int adiciona = stoi(forma);
                elementos.push_back(adiciona);
            }
        }

        if (!val) {
            if (elementos.size() % 2 == 0) {
                for (int i = 0; i < elementos.size(); i += 2) {
                    int res = elementos[i] + elementos[i + 1];
                    string resu = separarDigitos(res);
                    cout << resu << endl;
                }
            }
        }
    }

    return 0;
}
