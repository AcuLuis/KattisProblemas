#include <iostream>
#include <string>
using namespace std;

bool diferente(const string &num) {
    bool digitos[10] = {false};
    for (char c : num) {
        int digito = c - '0';
        if (digitos[digito]) {
            return true;
        }
        digitos[digito] = true;
    }
    return false;
}

bool divisible(int num, const string &cad) {
    for (char c : cad) {
        int digito = c - '0';
        if (digito == 0 || num % digito != 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int inf = 0, sup = 0;
    cin >> inf >> sup;
    int cont = 0;

    for (int i = inf; i <= sup; i++) {
        string aux = to_string(i);
        if (!diferente(aux) && !divisible(i, aux)) {
            cont++;
        }
    }

    cout << cont << endl;
    return 0;
}
