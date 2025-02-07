#include <iostream>
using namespace std;

int main() {

    int a=0,b =0, c=0;
    cin>>a>>c;
    if((a>=-1000&&a<=1000)&&(c>=-1000&&c<=1000)){
        b = (c<<1)-a;
        cout<<b;
    }
}
