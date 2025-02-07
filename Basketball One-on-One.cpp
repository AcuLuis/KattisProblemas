#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char entrada[201];
    bool val = false;
    bool empate = false, ganaA = false, ganaB = false;
    int contA = 0, contB = 0;

    cin.getline(entrada, 201, '\n');

    for (int i = 0; i < strlen(entrada); i++) {
        if (!(entrada[i] == '1' || entrada[i] == '2' || entrada[i] == 'A' || entrada[i] == 'B')) {
            val = true;
            break;
        }
    }

    if (!val) {
        for (int i = 0; i < strlen(entrada); i++) {
            if (entrada[i] == '1' || entrada[i] == '2') {
                if (entrada[i] == '1' && entrada[i - 1] == 'A') {
                    contA++;
                } else if (entrada[i] == '2' && entrada[i - 1] == 'A') {
                    contA += 2;
                } else if (entrada[i] == '1' && entrada[i - 1] == 'B') {
                    contB++;
                } else if (entrada[i] == '2' && entrada[i - 1] == 'B') {
                    contB += 2;
                }
                if (empate) {
                    if (contA - contB == 2) {
                        ganaA = true;
                    } else if (contB - contA == 2) {
                        ganaB = true;
                    }
                }
            }
        }
        if (contA >= 11 && !empate) {
            ganaA = true;
        } else if (contB >= 11 && !empate) {
            ganaB = true;
        }
        if (contA == 10 && contB == 10) {
            empate = true;
        }
    } else {
        val=true;
    }

    if(!val){
        if (ganaA) {
            cout << "A\n";
        } else if (ganaB) {
            cout << "B\n";
        }
    }

    return 0;
}
