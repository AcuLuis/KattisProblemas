#include <iostream>
#include <vector>
using namespace std;

struct Rectangulo {
    int x1, y1, x2, y2;
};

struct Circulo {
    int x, y, r;
};

int main() {
    int m;
    cin >> m;

    vector<Rectangulo> rectangulos;
    vector<Circulo> circulos;

    for (int i = 0; i < m; i++) {
        string tipo;
        cin >> tipo;
        if (tipo == "rectangle") {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            rectangulos.push_back({x1, y1, x2, y2});
        } else {
            int x, y, r;
            cin >> x >> y >> r;
            circulos.push_back({x, y, r});
        }
    }

    int n;
    cin >> n;
    vector<int> tiros_total;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        int count = 0;

        for (const auto& rect : rectangulos) {
            if (x >= rect.x1 && x <= rect.x2 && y >= rect.y1 && y <= rect.y2) {
                count++;
            }
        }

        for (const auto& circ : circulos) {
            int dx = x - circ.x;
            int dy = y - circ.y;
            if (dx * dx + dy * dy <= circ.r * circ.r) {
                count++;
            }
        }

        tiros_total.push_back(count);
    }
    for(int i=0; i<tiros_total.size(); i++){
        cout<<tiros_total[i]<<endl;
    }
    return 0;
}
