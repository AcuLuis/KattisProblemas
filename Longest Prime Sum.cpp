#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n>=2 && n<=1e18){
        if(n/2 > n/3){
            cout<<n/2;
        }else{
            cout<<n/3;
        }
    }
}
