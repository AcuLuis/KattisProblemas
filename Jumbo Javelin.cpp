#include<bits/stdc++.h>

using namespace std;
int main(){
    int n=0;
    bool val=false;
    int suma=0;
    cin>>n;
    if(n>1 && n<=100){
        int m = n-1;
        for(int i=0; i<n; i++){
            int ele=0;
            cin>>ele;
            if(ele>=1 && ele<=50){
                suma+=ele;
            }else{
                val=true;
            }
        }
        if(val==false){
            int res=0;
            res = suma-m;
            cout<<res<<endl;
        }
    }
}
