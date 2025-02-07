#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int a=0,b=0;
    cin>>a>>b;
    if(a>=0 && a<=1000 && b>=0 && b<=1000){
        if(a!=b){
            if(a>b){
                int res = a-b;
                if(res==1){
                    cout<<"Dr. Chaz needs "<<res<<" more piece of chicken!"<<endl;
                }else{
                    cout<<"Dr. Chaz needs "<<res<<" more pieces of chicken!"<<endl;
                }
            }else{
                int res = b-a;
                if(res==1){
                    cout<<"Dr. Chaz will have "<<res<<" piece of chicken left over!"<<endl;
                }else{
                    cout<<"Dr. Chaz will have "<<res<<" pieces of chicken left over!"<<endl;
                }
            }
        }
    }
}
