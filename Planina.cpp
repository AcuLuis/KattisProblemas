#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int r = 0;
    cin >> r;
    if (r >= 1 && r <= 15) {
        int result = pow(2, r) + 1;
        result = pow(result, 2);
        cout << result << endl;
    }
    return 0;
}
