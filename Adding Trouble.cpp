#include <iostream>
using namespace std;

int main() {
    int a=0, b=0, c=0;
    cin>>a>>b>>c;
    if(-1e9<=(a,b,c)<=1e9){
        if((a+b)==c){
            cout<<"correct!";
            return 0;
        }else{
            cout<<"wrong!";
            return 0;
        }
    }
    return 0;
}
