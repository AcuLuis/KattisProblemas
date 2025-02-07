#include <iostream>

using namespace std;

int main() {
    long int x=0, y=0;
    cin>>x>>y;
    if((x>0 && x<=1e9) && (y>0 && y<=1e9)){
        if(x>y){
            cout<<"1"<<endl;
        }else{
            cout<<"0"<<endl;
        }
    }
}
