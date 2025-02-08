#include <iostream>
using namespace std;
int main() {
    string cadena;
    cin>>cadena;
    bool seisnueve=false, cuatroveinte=false;
    for(int i=0; i<cadena.size(); i++){
        if(cadena[i]=='6' && cadena[i+1]=='9'){
            seisnueve=true;
        }
        if(cadena[i]=='4' && cadena[i+1]=='2' && cadena[i+2]=='0'){
            cuatroveinte=true;
        }
    }
    if(seisnueve==true || cuatroveinte==true){
        cout<<"Mergjad!"<<endl;
    }else{
        cout<<"Leim!"<<endl;
    }
    return 0;
}
