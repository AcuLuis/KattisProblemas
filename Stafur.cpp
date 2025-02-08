#include <iostream>
using namespace std;

int main() {
    char letra;
    cin >> letra;
    string res;

    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        res = "Jebb";
    }else if (letra >= 'A' && letra <= 'Z') {
        if (letra == 'Y') {
            res = "Kannski";
        } else {
            res = "Neibb";
        }
    }else {
        res = "Kannski";
    }

    cout << res << endl;
    return 0;
}
