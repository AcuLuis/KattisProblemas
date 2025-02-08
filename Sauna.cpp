#include <iostream>
#include <limits>
using namespace std;

int main() {
    int N;
    cin >> N;

    int maxLow = 0;
    int minHigh = numeric_limits<int>::max();

    for (int i = 0; i < N; ++i) {
        int ai, bi;
        cin >> ai >> bi;
        maxLow = max(maxLow, ai);
        minHigh = min(minHigh, bi);
    }
    if (maxLow > minHigh) {
        cout << "bad news" << endl;
    } else {
        cout << (minHigh - maxLow + 1) << " " << maxLow << endl;
    }

    return 0;
}
