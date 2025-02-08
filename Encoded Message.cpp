#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

string transforma(string word){
    string finali="";
    int r = sqrt(word.size());
    vector<vector<char>> palabras(r, vector<char>(r, ' '));
    int cont=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            palabras[i][j]=word[cont];
            cont++;
        }
    }
    for(int i=r-1; i>=0; i--){
        for(int j=0; j<r; j++){
            finali+=string(1,palabras[j][i]);
        }
    }
    return finali;
}

int main() {
    int n=0,cont=0;
    vector<string> mensajes;
    cin>>n;
    for(int i=0;i<n; i++){
        string cadena;
        cin>>cadena;
        mensajes.push_back(transforma(cadena));
    }
    for(string c: mensajes){
        cout<<c<<endl;
    }
    return 0;
}
