#include <iostream>
using namespace std;
int main() {
    string cadena;
    cin>>cadena;
    string reduccion="";
    for(int i=0; i<cadena.size(); i++){
        if(cadena[i]!=cadena[i+1]){
            reduccion+=string(1, cadena[i]);
        }
    }
    cout<<reduccion<<endl;
    return 0;
}
