#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    map<char, int> rank_count;
    stringstream ss(input);
    string card;
    while(ss>>card){
        char rank = card[0];
        rank_count[rank]++;
    }
    int max_strength = 0;
    for (const auto &entry : rank_count) {
        if (entry.second > max_strength) {
            max_strength = entry.second;
        }
    }
    cout << max_strength << endl;
    return 0;
}
