#include <iostream>
using namespace std;

int main() {
    int necesito=0, limite=7;
    cin >> necesito;
    if(necesito>0 && necesito<limite){
        cout<<necesito+1<<endl;
    }else{
        if(necesito==0){
            cout<<0<<endl;
        }
        if(necesito==limite){
            cout<<limite<<endl;
        }
    }
    return 0;
}
