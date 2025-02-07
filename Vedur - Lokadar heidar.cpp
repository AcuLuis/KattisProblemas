#include <iostream>
#include <vector>
using namespace std;

int main() {
    int velocidad = 0, n_personas = 0;
    cin >> velocidad;
    cin >> n_personas;
    if ((velocidad >= 0 && velocidad <= 200) && (n_personas >= 1 && n_personas <= 100)) {
        vector<pair<string, string>> lugarVelocidad;
        for (int i = 0; i < n_personas; i++) {
            string lugar = "";
            int seguro = 0;
            cin >> lugar >> seguro;
            if (seguro >= 0 && seguro <= 200) {
                if (seguro >= velocidad) {
                    lugarVelocidad.push_back({lugar, "opin"});
                } else {
                    lugarVelocidad.push_back({lugar, "lokud"});
                }
            } else {
                return 0;
            }
        }

        for (const auto &p : lugarVelocidad) {
            cout << p.first << " " << p.second << endl;
        }
    }
    return 0;
}
