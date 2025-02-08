#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    map<vector<int>, int> combinacion_count;
    int max_popularity = 0;

    for (int i = 0; i < n; i++) {
        int c1, c2, c3, c4, c5;
        cin >> c1 >> c2 >> c3 >> c4 >> c5;
        vector<int> cursos = {c1, c2, c3, c4, c5};
        sort(cursos.begin(), cursos.end());
        combinacion_count[cursos]++;
        max_popularity = max(max_popularity, combinacion_count[cursos]);
    }

    int total_frosh = 0;
    for (const auto &pair : combinacion_count) {
        if (pair.second == max_popularity) {
            total_frosh += pair.second;
        }
    }

    cout << total_frosh << endl;
    return 0;
}
