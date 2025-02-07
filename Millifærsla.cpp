#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a=0, b=0, c=0;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>=1 && a<=1e9){
        if(b>=1 && b<=1e9){
            if(c>=1 && c<=1e9){
                int r = min(min(a, b), c);
                if(r==a){
                    cout<<"Monnei"<<endl;
                }else if(r==b){
                    cout<<"Fjee"<<endl;
                }else{
                    cout<<"Dolladollabilljoll"<<endl;
                }
            }
        }
    }
    return 0;
}
