#include <iostream>
using namespace std;

int main() {
    string n;
    cin>>n;
    if(1<=n.size()<=100){
        for(char c: n){
            if(c=='0' && c=='1'){
                return 0;
            }
        }
        cout<<n[0]<<endl;
    }
    return 0;
}
