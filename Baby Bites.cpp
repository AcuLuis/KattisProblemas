#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<string> v(n);
    if (n >= 1 && n <= 1000) {
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
    }
    int cont = 1;
    bool valida = false;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == "mumble" || stoi(v[i]) == cont) {
            cont++;
        } else {
            valida = true;
            break;
        }
    }
    if (!valida && (cont>=0 && cont<=10000)) {
        cout << "makes sense\n";
    } else {
        cout << "something is fishy\n";
    }
    return 0;
}
