#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    int cont=0;
    for(int i=0; i<n; i++){
        string cadena;
        cin>>cadena;
        bool val=false;
        for(int j=0; j<cadena.size(); j++){
            if(cadena[j]=='C'&&cadena[j+1]=='D'){
                val=true;
            }
        }
        if(!val){
            cont++;
        }
    }
    cout<<cont<<endl;
    return 0;
}
