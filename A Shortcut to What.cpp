#include <iostream>
#include <string>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    if(n>=-1000 && n<=1000){
        int res = 3*(n+5)-10;
        cout<<res<<endl;
    }
    return 0;
}
