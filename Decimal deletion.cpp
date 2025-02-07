#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n=0;
    cin>>n;
    if(n>=0 && n<=10000){
        cout<<round(n)<<endl;
    }
    return 0;
}
