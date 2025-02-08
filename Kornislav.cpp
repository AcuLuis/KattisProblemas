#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a=0, b=0, c=0, d=0;
    cin>>a>>b>>c>>d;
    vector<int> numeros={a,b,c,d};
    sort(numeros.begin(), numeros.end());
    cout<<numeros[0]*numeros[2]<<endl;
    return 0;
}
