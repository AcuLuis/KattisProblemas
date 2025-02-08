#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n=0, m=0;
    cin>>n>>m;
    vector<string> filas;
    for(int i=0; i<n; i++){
        string recta;
        cin>>recta;
        filas.push_back(recta);
    }
    vector<int> nieve;
    for(int i=0; i<m; i++){
        int copos=0;
        for(int j=0; j<filas.size(); j++){
            if(filas[j][i]=='S'){
                copos++;
            }
        }
        nieve.push_back(copos);
    }
    //{2, 1, 2} matriz=4*3
    vector<string> respuesta;
    for(int i=0; i<filas.size(); i++){
        string fNieve="";
        for(int j=0; j<nieve.size(); j++){
            if((n-i-1)<nieve[j]){
                fNieve+="S";
            }else{
                fNieve+=".";
            }
        }
        respuesta.push_back(fNieve);
    }

    for(const auto& r:respuesta){
        cout<<r<<endl;
    }
    return 0;
}
