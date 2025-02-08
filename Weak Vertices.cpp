#include <iostream>
#include <vector>

using namespace std;
bool isWeakVertex(int vertex, const vector<vector<int>>& adjMatrix, int n) {
    for (int i = 0; i < n; i++) {
        if (adjMatrix[vertex][i] == 1) {
            for (int j = i + 1; j < n; j++) {
                if (adjMatrix[vertex][j] == 1 && adjMatrix[i][j] == 1) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    vector<vector<int>> weakVertices;
    while (true) {
        int n;
        cin >> n;
        if (n == -1) break;
        vector<vector<int>> adjMatrix(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> adjMatrix[i][j];
            }
        }
        vector<int> vertices;
        for (int i = 0; i < n; i++) {
            if (isWeakVertex(i, adjMatrix, n)) {
                vertices.push_back(i);
            }
        }
        weakVertices.push_back(vertices);
    }
    for (int i = 0; i < weakVertices.size(); i++) {
        for(int j=0; j<weakVertices[i].size(); j++){
            cout << weakVertices[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
