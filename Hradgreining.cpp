#include <iostream>
#include <string>
using namespace std;

int main() {
    string dna;
    cin >> dna;  // Leer la cadena de ADN

    // Buscar si la subcadena "COV" está en la cadena de ADN
    if (dna.find("COV") != string::npos) {
        cout << "Veikur!" << endl;
    } else {
        cout << "Ekki veikur!" << endl;
    }

    return 0;
}
