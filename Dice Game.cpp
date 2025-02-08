#include <iostream>
using namespace std;

int main() {
    double a1=0, b1=0, a2=0, b2=0;
    double x1=0, y1=0, x2=0, y2=0;
    cin>>a1>>b1>>a2>>b2;
    cin>>x1>>y1>>x2>>y2;
    double esperado_gunnar = (a1+b1)/2 + (a2+b2)/2;
    double esperado_emma = (x1+y1)/2 + (x2+y2)/2;
    if(esperado_gunnar>esperado_emma){
        cout<<"Gunnar"<<endl;
    }else if(esperado_emma>esperado_gunnar){
        cout<<"Emma"<<endl;
    }else{
        cout<<"Tie"<<endl;
    }
    return 0;
}
