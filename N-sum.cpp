#include<bits/stdc++.h>

using namespace std;
int main(){
    int n=0;
    bool val=false;
    cin>>n;
    if(n>=2 && n<=10){
        int sum=0;
        for(int i=0; i<n; i++){
            int a = 0;
            cin>>a;
            if(a>=0 && a<=1000){
                sum = sum + a;
            }else{
                val = true;
            }
        }
        if(val==false){
            cout<<sum<<endl;
        }
    }
}
