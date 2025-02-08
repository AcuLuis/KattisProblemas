#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin >> n;
    if (n < 1 || n > 10) {
        return 0;
    }
    cout<<45*n<<" ml gin"<<endl;
    cout<<30*n<<" ml fresh lemon juice"<<endl;
    cout<<10*n<<" ml simple syrup"<<endl;
    if(n==1){
        cout<<1<< " slice of lemon"<<endl;
    }else{
        cout<<1*n<< " slices of lemon"<<endl;
    }
    return 0;
}
