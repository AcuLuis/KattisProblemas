#include <iostream>
#include <string>
using namespace std;
int main() {
    string oracion;
    getline(cin, oracion);
    string todaOracion="";
    for(int i=0; i<oracion.size(); i++){
        if(oracion[i]!=oracion[i+1]){
            todaOracion+=string(1, oracion[i]);
        }
    }
    cout<<todaOracion<<endl;
    return 0;
}
