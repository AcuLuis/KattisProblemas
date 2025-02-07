#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double h=0, b=0;
    cin>>h>>b;
    if((1<=h<=1000)&&(1<=b<=1000)){
        double result = (b*h)/2;
        cout<<fixed<<setprecision(7)<<result<<endl;
    }
    return 0;
}
