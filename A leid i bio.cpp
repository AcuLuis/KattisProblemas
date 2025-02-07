#include <iostream>
using namespace std;
int main(){
    int a=0, b=0, c=0;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>=1 && a<=100){
        if(b>=1 && b<=100){
            if(c>=720 && c<=1439){
                cout<<c-(a+b);
            }
        }
    }
    return 0;
}
