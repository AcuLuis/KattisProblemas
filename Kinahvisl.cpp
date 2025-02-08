#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2;
    getline(cin, word1);
    getline(cin, word2);

    if(word1.size() != word2.size()) {
        return 0;
    }
    for(char c : word1) {
        if(!islower(c)) return 0;
    }
    for(char c : word2) {
        if(!islower(c)) return 0;
    }
    int differences = 0;
    for(int i = 0; i < word1.size(); i++) {
        if(word1[i] != word2[i]) {
            differences++;
        }
    }
    cout << differences+1 << endl;
    return 0;
}
