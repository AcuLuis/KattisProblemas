#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string email;
    getline(cin, email);

    string emailLimpio = "";

    for (char c : email) {
        if (c != ' ') {
            emailLimpio += c;
        }
    }

    if (emailLimpio.size() > 1e6) {
        return 0;
    }

    int arroba = emailLimpio.find('@');
    if (arroba == string::npos || emailLimpio.find('@', arroba + 1) != string::npos) {
        return 0;
    }

    if (!islower(emailLimpio[0])) {
        return 0;
    }

    char ultimo = emailLimpio[emailLimpio.size() - 1];
    if (!(islower(ultimo) || ultimo == '.')) {
        return 0;
    }

    cout << emailLimpio << endl;

    return 0;
}
