#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 0;
    bool val = false;
    vector<string> respuesta;
    cin >> n;
    if (n >= 1 && n <= 20) {
        for (int i = 0; i < n; i++) {
            int x = 0;
            string j = "";
            cin >> x;
            if (x >= -10 && x <= 10) {
                if (x % 2 == 0) {
                    j = to_string(x) + " is even";
                    respuesta.push_back(j);
                } else {
                    j = to_string(x) + " is odd";
                    respuesta.push_back(j);
                }
            } else {
                val = true;
            }
        }
    } else {
        val = true;
    }

    if (!val) {
        for (int i = 0; i < n; i++) {
            cout << respuesta[i] << endl;
        }
    }

    return 0;
}
