#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> seen;
    for (char c : s) {
        if (seen.count(c)) {
            cout << 0 << endl;
            return 0;
        }
        seen.insert(c);
    }

    cout << 1 << endl;
    return 0;
}
