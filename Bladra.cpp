#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double v=0, a=0, t=0;
    cin>>v>>a>>t;
    if(v>=-1000 && v<=1000){
        if(a>=-1000 && a<=1000){
            if(t>=0 && t<=1000){
                double res = v*t+0.5*a*t*t;
                cout<<fixed<<setprecision(9)<<res<<endl;
            }
        }
    }
    return 0;
}
