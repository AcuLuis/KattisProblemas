#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    long long int n=0, k=0;
    cin>>n>>k;
    if((n>=2 && n<=1e6) && (k>0 && k<n)){
        long double n1=0, n2=0, res=0, x=0;
        cin>>n1>>n2;
        if((n1>=0 && n1<=100) && (n2>=0 && n2<=100)){
            res = n-k;
            x = ((n1)*n - (n2*k))/res;
            if(x>=0 && x<=100){
                cout<<fixed<<setprecision(6)<<x<<endl;
            }else{
                cout<<"impossible"<<endl;
            }
        }
    }
}
