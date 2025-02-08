#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<string> palabra;
    string oracion;

    getline(cin, oracion);
    stringstream ss(oracion);
    string temp;
    while (ss >> temp) {
        palabra.push_back(temp);
    }

    if (palabra.size() != n) {
        return 1;
    }

    int diccionario;
    cin >> diccionario;
    vector<pair<string, string>> trad;

    for (int i = 0; i < diccionario; i++) {
        string idioma, traduccion;
        cin >> idioma >> traduccion;
        trad.push_back({idioma, traduccion});
    }

    string todo = "";
    for (const auto &c : palabra) {
        bool encontrado = false;
        for (const auto &t : trad) {
            if (c == t.first) {
                if (!todo.empty()) {
                    todo += " ";
                }
                todo += t.second;
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            if (!todo.empty()) {
                todo += " ";
            }
            todo += c;
        }
    }
    cout << todo << endl;

    return 0;
}
