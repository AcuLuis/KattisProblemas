#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int a, b;
    vector<string> cadenas;

    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        if (b == 0) {
            cout << "Error: División por cero" << endl;
            continue;
        }
        int entero = a / b;
        int resto = a % b;
        cadenas.push_back(to_string(entero) + " " + to_string(resto) + " / " + to_string(b));
    }
    for (const string& r : cadenas) {
        cout << r << endl;
    }
    return 0;
}
