#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int aux_primero = b - a - 1;
    int aux_segundo = c - b - 1;
    int maximo = max(aux_primero, aux_segundo);
    cout<<maximo<<endl;
    return 0;
}
