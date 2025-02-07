#include <iostream>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    if(n>=1 && n<=10000000){
        if(n%2==0){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}
