#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int n=0, q=0;
    cin>>n>>q;
    vector<string> nombres;
    vector<string> ini;
    for(int i=0; i<n; i++){
        string nombre="", apellido="";
        cin>>nombre>>apellido;
        string nom=nombre+" "+apellido;
        string inis=string(1, nombre[0])+string(1, apellido[0]);
        nombres.push_back(nom);
        ini.push_back(inis);
    }
    vector<string> iniciales;
    for(int i=0; i<q; i++){
        string inicial;
        cin>>inicial;
        iniciales.push_back(inicial);
    }
    string respuesta="";
    for(int i=0; i<iniciales.size(); i++){
        int cont=0;
        int pos=-1;
        for(int j=0; j<ini.size(); j++){
            if(iniciales[i]==ini[j]){
                cont++;
                pos=j;
            }
        }
        if(cont==0){
            respuesta+="nobody\n";
        }else{
            if(cont==1){
                respuesta+=nombres[pos]+"\n";
            }else{
                respuesta+="ambiguous\n";
            }
        }
    }
    cout<<respuesta<<endl;
    return 0;
}
