#include <iostream>
#include <unordered_map>
using namespace std;

string getLeft(string dir) {
    unordered_map<string, string> leftMap = {
        {"North", "East"},
        {"East", "South"},
        {"South", "West"},
        {"West", "North"}
    };
    return leftMap[dir];
}

string getRight(string dir) {
    unordered_map<string, string> rightMap = {
        {"North", "West"},
        {"East", "North"},
        {"South", "East"},
        {"West", "South"}
    };
    return rightMap[dir];
}

string getStraight(string dir) {
    unordered_map<string, string> straightMap = {
        {"North", "South"},
        {"East", "West"},
        {"South", "North"},
        {"West", "East"}
    };
    return straightMap[dir];
}

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    string left = getLeft(a);
    string right = getRight(a);
    string straight = getStraight(a);

    if (left == b) {
        if (right == c || straight == c) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    } else if (straight == b) {
        if (right == c) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    } else {
        cout << "No\n";
    }

    return 0;
}
