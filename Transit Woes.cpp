#include <iostream>
#include <vector>
using namespace std;

int main() {
    int s, t, n;
    cin >> s >> t >> n;

    vector<int> d(n + 1), b(n), c(n);

    for (int i = 0; i <= n; i++) {
        cin >> d[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int current_time = s + d[0];

    for (int i = 0; i < n; i++) {
        if (current_time % c[i] != 0) {
            current_time += c[i] - (current_time % c[i]);
        }

        current_time += b[i];
        current_time += d[i + 1];
    }

    if (current_time <= t) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
