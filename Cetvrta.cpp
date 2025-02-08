#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> absisa;
    vector<int> ordena;
    int x_res=0, y_res=0;
    for(int i=0; i<3; i++){
        int x=0, y=0;
        cin>>x>>y;
        if(x<1 || x>1000) return 0;
        if(y<1 || y>1000) return 0;
        absisa.push_back(x);
        ordena.push_back(y);
    }
    if(absisa[0]==absisa[1]){
        x_res=absisa[2];
    }else if(absisa[1]==absisa[2]){
        x_res=absisa[0];
    }else{
        x_res=absisa[1];
    }
    if(ordena[0]==ordena[1]){
        y_res=ordena[2];
    }else if(ordena[1]==ordena[2]){
        y_res=ordena[0];
    }else{
        y_res=ordena[1];
    }
    cout<<x_res<<" "<<y_res<<endl;
    return 0;
}
