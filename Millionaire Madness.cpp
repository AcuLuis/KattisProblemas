#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int M, N;
vector<vector<int>> altura;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
bool sePuedeLlegar(int largo) {
    vector<vector<bool>> visitado(M, vector<bool>(N, false));
    queue<pair<int, int>> q;
    q.push({0, 0});
    visitado[0][0] = true;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x == M - 1 && y == N - 1) return true;
        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx >= 0 && ny >= 0 && nx < M && ny < N && !visitado[nx][ny]) {
                int diferencia = altura[nx][ny] - altura[x][y];

                if (diferencia <= largo) {
                    visitado[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
    return false;
}
int main() {
    cin >> M >> N;
    altura.resize(M, vector<int>(N));
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            cin >> altura[i][j];
        }
    }
    int izquierda = 0, derecha = 1e9, respuesta = -1;
    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;
        if (sePuedeLlegar(medio)) {
            respuesta = medio;
            derecha = medio - 1;
        } else {
            izquierda = medio + 1;
        }
    }
    cout << respuesta << endl;
    return 0;
}
