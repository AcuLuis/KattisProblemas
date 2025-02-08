#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
    double a=0, b=0, c=0, d=0;
    cin >> a >> b >> c >>d;
    double semip = (a+b+c+d)/2;
    double area = sqrt((semip-a)*(semip-b)*(semip-c)*(semip-d));
    cout<<fixed<<setprecision(15)<<area<<endl;
    return 0;
}
