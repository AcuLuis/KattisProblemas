#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    if(1<=n<=1000){
        if(n%2==0){
            cout<<"second"<<endl;
            return 0;
        }else{
            cout<<"first"<<endl;
            return 0;
        }
    }
    return 0;
}
