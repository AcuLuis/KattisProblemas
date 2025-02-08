#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int number;
        cin >> number;

        bool isOdd = (number % 2 != 0);
        int sqrtNum = sqrt(number);
        bool isPerfectSquare = (sqrtNum * sqrtNum == number);

        if (isOdd && isPerfectSquare) {
            cout << "OS" << endl;
        } else if (isOdd) {
            cout << "O" << endl;
        } else if (isPerfectSquare) {
            cout << "S" << endl;
        } else {
            cout << "EMPTY" << endl;
        }
    }

    return 0;
}
