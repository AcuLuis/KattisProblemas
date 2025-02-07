#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a=0, b=0, suma =0;
    cin>>a>>b;

    if((a>=0 && a<=1000000) && (b>=0 && b<=1000000)){
        suma = a+b;
    }
    cout<<"\n"<<suma;
}
