#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    int volumen=7;
    for(int i=0; i<n; i++){
        string ini, fin;
        cin>>ini>>fin;
        if(fin=="op!" && volumen<10){
            volumen++;
        }else if(fin=="ned!" && volumen>0){
            volumen--;
        }else{
            volumen=volumen;
        }
    }
    cout<<volumen<<endl;
    return 0;
}
