#include <iostream>
#include <map>
using namespace std;
int main(){
    int n=0;
    char cad;
    cin>>n>>cad;
    if(n<1 || n>100) return 0;
    if(cad!='S' && cad!='H' && cad!='D' && cad!='C') return 0;
    map<char, int> dominante={{'A',11},{'K',4},{'Q',3},{'J',20},{'T',10},{'9',14},{'8',0},{'7',0}};
    map<char, int> noDominante={{'A',11},{'K',4},{'Q',3},{'J',2},{'T',10},{'9',0},{'8',0},{'7',0}};
    int suma=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            string duo;
            cin>>duo;
            if(duo.size()>2) return 0;
            char valor = duo[0];
            char palo = duo[1];
            if(palo==cad){
                auto pos = dominante.find(valor);
                suma = suma+pos->second;
            }else{
                auto pos = noDominante.find(valor);
                suma = suma+pos->second;
            }
        }
    }
    cout<<suma<<endl;
    return 0;
}
