#include <iostream>
using namespace std;

int main() {
    int b=0, l=0;
    cin>>b>>l;

    if((b>=0 && b<=100) && (l>=0 && l<=100)){
        int res = min(b, l);
        cout<<res*2<<endl;
    }

    return 0;
}
