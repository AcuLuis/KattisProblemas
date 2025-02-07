#include <iostream>
#include <string>
using namespace std;
int main(){
    int m=0, n=0;
    cin>>n;
    cin>>m;
    if(m>=0 && m<=n){
        if(n>=m && n<=10000){
            cout<<n-m;
        }
    }
    return 0;
}
