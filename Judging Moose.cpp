#include <iostream>
using namespace std;

int main() {
    int l = 0, r = 0;
    cin >> l >> r;

    if (l == 0 && r == 0) {
        cout << "Not a moose" << endl;
    } else if (l == r) {
        cout << "Even " << 2 * l << endl;
    } else {
        int maxi = max(l, r);
        cout << "Odd " << 2 * maxi << endl;
    }

    return 0;
}
