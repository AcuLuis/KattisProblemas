#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    vector<string> evaluacion;
    for(int i=0; i<n; i++){
        string nombre, fechaSecu, fechaNac;
        int curso;
        cin>>nombre>>fechaSecu>>fechaNac>>curso;
        string secu = string(1,fechaSecu[0])+string(1,fechaSecu[1])+string(1,fechaSecu[2])+string(1,fechaSecu[3]);
        if(stoi(secu)>=2010){
            string cadena="";
            cadena = nombre+" eligible";
            evaluacion.push_back(cadena);
            continue;
        }
        string fech = string(1,fechaNac[0])+string(1,fechaNac[1])+string(1,fechaNac[2])+string(1,fechaNac[3]);
        if(stoi(fech)>=1991){
            string cadena="";
            cadena = nombre+" eligible";
            evaluacion.push_back(cadena);
            continue;
        }
        if(stoi(secu)<2010 && stoi(fech)<1991 && curso>=41){
            string cadena="";
            cadena = nombre+" ineligible";
            evaluacion.push_back(cadena);
            continue;
        }
        if(stoi(secu)<2010 && stoi(fech)<1991 && curso<41){
            string cadena="";
            cadena = nombre+" coach petitions";
            evaluacion.push_back(cadena);
            continue;
        }
    }
    for(string c: evaluacion){
        cout<<c<<endl;
    }
    return 0;
}
