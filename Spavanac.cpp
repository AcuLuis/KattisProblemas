#include <iostream>
using namespace std;
int main(){
    int h=0, m=0;
    cin>>h>>m;
    if(h<0 || h>23) return 0;
    if(m<0 || m>59) return 0;
    if((m-45)<0){
        if(h!=0){
            h--;
            int aux=45-m;
            m=60-aux;
        }else{
            h=23;
            int aux=45-m;
            m=60-aux;
        }
    }else{
        m=m-45;
    }
    cout<<h<<" "<<m<<endl;
    return 0;
}
