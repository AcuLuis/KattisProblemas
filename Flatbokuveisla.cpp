#include <iostream>
using namespace std;
int main(){
    int n=0, m=0;
    cin>>n;
    cin>>m;
    if(n>=1 && n<=1e6){
        if(m>=1 && m<=1e6){
            cout<<n%m;
        }
    }
    return 0;
}
