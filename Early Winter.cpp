#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int run() {
    string input;
    getline(cin, input);
    istringstream iss(input);
    int size;
    iss >> size;
    int d;
    iss >> d;

    getline(cin, input);
    istringstream iss2(input);
    int year;
    int i = 0;
    while (iss2 >> year) {
        if (year <= d) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() {
    int smaller_run = run();
    if (smaller_run == -1) {
        cout << "It had never snowed this early!" << endl;
    } else {
        cout << "It hadn't snowed this early in " << smaller_run << " years!" << endl;
    }
    return 0;
}
