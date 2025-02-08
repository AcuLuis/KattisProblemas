#include <iostream>
using namespace std;

int main() {
    int n=0, h=0, v=0;
    cin>>n>>h>>v;

    int porcion1 = h*v*4;
    int porcion2 = h*(n-v)*4;
    int porcion3 = (n-h)*v*4;
    int porcion4 = (n-h)*(n-v)*4;

    cout<<max(porcion1, max(porcion2, max(porcion3, porcion4)))<<endl;

    return 0;
}
