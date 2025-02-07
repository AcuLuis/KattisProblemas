#include <iostream>
#include <iomanip>
using namespace std;

int  main(){
    int n=0;
    cin>>n;
    if(n>=1 && n<=1e5){
        double camp = 0.09144;
        cout<<fixed<<setprecision(5)<<camp*n;
    }
    return 0;
}
