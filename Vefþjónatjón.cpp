#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    int cpu=0, memoria=0, disco=0;
    cin.ignore();
    for(int i=0; i<n; i++){
        string cadena;
        getline(cin, cadena);
        for(int j=0; j<cadena.size(); j++){
            if(j==0 && cadena[j]=='J'){
                cpu++;
            }
            if(j==2 && cadena[j]=='J'){
                memoria++;
            }
            if(j==4 && cadena[j]=='J'){
                disco++;
            }
        }
    }
    int cont=0;
    while(cpu>0 && memoria>0 && disco>0){
        cont++;
        cpu--;
        memoria--;
        disco--;
    }
    cout<<cont<<endl;
    return 0;
}
