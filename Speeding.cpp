#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> t(n), d(n);

    for (int i = 0; i < n; i++) {
        cin >> t[i] >> d[i];
    }

    int max_speed = 0;

    for (int i = 1; i < n; i++) {
        int speed = (d[i] - d[i - 1]) / (t[i] - t[i - 1]);
        max_speed = max(max_speed, speed);
    }

    cout << max_speed << endl;

    return 0;
}
