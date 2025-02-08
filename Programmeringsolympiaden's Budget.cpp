#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin >> n;
    int suma=0;
    for(int i=0; i<n; i++){
        int dinero;
        string tipo;
        cin >> tipo;
        cin >> dinero;
        suma+=dinero;
    }
    if(suma>0){
        cout<<"Usch, vinst"<<endl;
    }else if(suma<0){
        cout<<"Nekad"<<endl;
    }else{
        cout<<"Lagom"<<endl;
    }
    return 0;
}
