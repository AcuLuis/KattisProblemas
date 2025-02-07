#include <iostream>
using namespace std;

int main(){
    int n=0, m=0;
    cin>>n;
    cin>>m;
    if(n>=2 && n<=1000){
        if(m>=2 && m<=1000){
            cout<<m+n;
        }
    }
    return 0;
}
