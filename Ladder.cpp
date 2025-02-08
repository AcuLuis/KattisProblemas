#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int h, v;
    cin >> h >> v;
    double angle_rad = v * M_PI / 180.0;
    double L = h/sin(angle_rad);
    int L_rounded = round(L);
    if(L>L_rounded){
        L_rounded++;
    }
    cout << L_rounded << endl;

    return 0;
}
