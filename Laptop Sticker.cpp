#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int wc=0, hc=0, ws=0, hs=0;
    cin>>wc>>hc>>ws>>hs;
    if((wc>=0 && wc<=1000) && (hc>=0 && hc<=1000) && (ws>=0 && ws<=1000) && (hs>=0 && hs<=10000)){
        wc = wc - 2;
        hc = hc - 2;
        if(wc>=ws && hc>=hs){
            cout<<"1"<<endl;
        }else{
            cout<<"0"<<endl;
        }
    }
}
