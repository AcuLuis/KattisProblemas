#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main() {

    string linea;
    getline(cin, linea);
    bool repetir=true;

    vector<string> palabras;
    stringstream ss(linea);
    string word;
    while(getline(ss, word, ' ')){
        palabras.push_back(word);
    }

    for(int i=0; i<palabras.size(); i++){
        for(int j=0; j<palabras.size(); j++){
            if(i!=j){
                if(palabras[i]==palabras[j]){
                    repetir=false;
                }
            }
        }
    }

    if(!repetir){
        cout<<"no"<<endl;
    }else{
        cout<<"yes"<<endl;
    }
}
