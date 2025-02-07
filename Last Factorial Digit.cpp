#include <iostream>
#include <sstream>
using namespace std;

int factorial(int n){
    int res=1;
    for(int j=0; j<n; j++){
        res = res*(j+1);
    }
    int ultimo = res%10;
    return ultimo;
}

int main() {
    int t=0;
    cin>>t;
    if(t>=1 && t<=10){
        ostringstream s;
        for(int i=0; i<t; i++){
            int n;
            cin>>n;
            if(n<1 || n>10){
                return 0;
            }
            s<<factorial(n)<<"\n";
        }
        cout<<s.str();
    }
    return 0;
}
