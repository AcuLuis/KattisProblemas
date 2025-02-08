#include <iostream>

using namespace std;
int main() {
    int a=0, b=0, c=0;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a==0) return 0;
    if(a<-100 || a>100) return 0;
    if(b<-100 || b>100) return 0;
    if(c<-100 || c>100) return 0;
    double dis = (b*b)-4*a*c;
    if(dis>0){
        cout<<2<<endl;
    }else if(dis==0){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}
