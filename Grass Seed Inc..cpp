#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double C;
    int L;
    cin >> C;
    cin >> L;
    double total_area = 0;
    for (int i = 0; i < L; i++) {
        double w, l;
        cin >> w >> l;
        total_area += w * l;
    }
    double total_cost = total_area * C;
    cout << fixed << setprecision(6) << total_cost << endl;

    return 0;
}
