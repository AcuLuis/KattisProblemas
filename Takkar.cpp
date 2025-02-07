#include <iostream>
using namespace std;
int main(){
    int a=0, b=0;
    cin>>a;
    cin>>b;
    if(a>b){
        cout<<"MAGA!";
    }else if(b>a){
        cout<<"FAKE NEWS!";
    }else{
        cout<<"WORLD WAR 3!";
    }
    return 0;
}
