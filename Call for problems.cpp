#include <iostream>
#include <string>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    if (n<1 || n>50) return 0;
    int impar=0;
    for(int i=0; i<n; i++){
        int d=0;
        cin>>d;
        if(d<0 || d>100) return 0;
        if(d%2!=0) impar++;
    }
    cout<<impar<<endl;
    return 0;
}
