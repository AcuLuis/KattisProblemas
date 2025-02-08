#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    double largo, base, area;
    largo = x2 - x1;
    base = y2 - y1;
    area = largo*base;
    if(area<0){
        area=area*(-1);
    }
    cout<<fixed<<setprecision(3)<<area<<endl;
    return 0;
}
