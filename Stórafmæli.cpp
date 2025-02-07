#include <iostream>
using namespace std;
int main(){
    int a=0;
    cin>>a;
    if(a>=1 && a<=1e6){
        if(a%10==0){
            cout<<"Jebb";
        }else{
            cout<<"Neibb";
        }
    }
    return 0;
}
