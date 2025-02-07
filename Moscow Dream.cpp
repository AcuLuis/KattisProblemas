#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int a=0,b=0,c=0,n=0;
    cin>>a>>b>>c>>n;
    if((a>=0&&a<=10)&&(b>=0&&b<=10)&&(c>=0&&c<=10)&&(n>=1 && n<=20)){
        if(a>=1 && b>=1 && c>=1 && n>=3){
            int limi = a+b+c;
            if(n<=limi){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}
