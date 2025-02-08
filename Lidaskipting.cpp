#include <iostream>
#include <string>
using namespace std;

// Función para calcular N % 3 cuando N es una cadena muy grande
int modulo3(const string& n) {
    int remainder = 0;
    for (char digit : n) {
        remainder = (remainder * 10 + (digit - '0')) % 3;
    }
    return remainder;
}

int main() {
    string n;
    cin >> n;

    // Calcular si el número es divisible entre 3
    if (modulo3(n) == 0) {
        cout << "Jebb" << endl;
    } else {
        cout << "Neibb" << endl;
    }

    return 0;
}
