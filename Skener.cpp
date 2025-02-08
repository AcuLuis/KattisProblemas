#include <iostream>
#include <vector>
using namespace std;
int main() {
    int r=0,c=0,zr=0,zc=0;
    cin>>r>>c>>zr>>zc;
    if(r<1 || r>50) return 0;
    if(c<1 || c>50) return 0;
    if(zr<1 || zr>5) return 0;
    if(zc<1 || zc>5) return 0;
    vector<string> matriz(r);
    for(int i = 0; i < r; i++) {
        cin >> matriz[i];
    }
    for(int i = 0; i < r; i++) {
        for(int ri = 0; ri < zr; ri++) {
            for(int j = 0; j < c; j++) {
                for(int cj = 0; cj < zc; cj++) {
                    cout << matriz[i][j];
                }
            }
            cout << endl;
        }
    }
    return 0;
}
