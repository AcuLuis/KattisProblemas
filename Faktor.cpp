#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int art=0, imp=0, res=0;
    cin>>art>>imp;

    if((art>=1 && art<=100)&&(imp>=1 && imp<=100)){
        res = art*imp - (art-1);
        cout<<res<<endl;
    }
}
