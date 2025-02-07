#include <iostream>
using namespace std;
long long performOperation(long long a, char op, long long b, long long &prevResult) {
    if (op == '+') {
        long long result = (a + b) - prevResult;
        prevResult = result;
        return result;
    } else if (op == '-') {
        long long result = prevResult * (a - b);
        prevResult = result;
        return result;
    } else if (op == '*') {
        long long result = (a * b) * (a * b);
        prevResult = result;
        return result;
    } else if (op == '/') {
        long long result;
        if (a % 2 == 0) {
            result = a / 2;
        } else {
            result = (a + 1) / 2;
        }
        prevResult = result;
        return result;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;

    long long prevResult = 1;

    for (int i = 0; i < n; ++i) {
        long long a, b;
        char op;
        cin >> a >> op >> b;

        long long result = performOperation(a, op, b, prevResult);
        cout << result << endl;
    }

    return 0;
}
