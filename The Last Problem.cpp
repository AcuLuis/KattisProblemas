#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string nombre;
    getline(cin, nombre);

    bool val = false;
    if (nombre.size() >= 1 && nombre.size() <= 50) {
        for (int i = 0; i < nombre.size(); i++) {
            if (!(islower(nombre[i]) || isupper(nombre[i]) || nombre[i] == ' ')) {
                val = true;
                break;
            }
            if (i > 0 && nombre[i] == ' ' && nombre[i - 1] == ' ') {
                val = true;
                break;
            }
        }
    } else {
        val = true;
    }

    if (!val) {
        cout << "Thank you, " << nombre << ", and farewell!" << endl;
    }

    return 0;
}

