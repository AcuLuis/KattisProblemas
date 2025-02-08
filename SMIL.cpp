#include <iostream>
#include <vector>
using namespace std;
int main() {
    string caracteres;
    cin>>caracteres;
    vector<int> posiciones;
    for(int i=0; i<caracteres.size(); i++){
        if(caracteres[i]==':'){
            if(caracteres[i+1]==')'){
                posiciones.push_back(i);
            }else if(caracteres[i+1]=='-' && caracteres[i+2]==')'){
                posiciones.push_back(i);
            }
        }
        if(caracteres[i]==';'){
            if(caracteres[i+1]==')'){
                posiciones.push_back(i);
            }else if(caracteres[i+1]=='-' && caracteres[i+2]==')'){
                posiciones.push_back(i);
            }
        }
    }
    for(int r: posiciones){
        cout<<r<<endl;
    }
    return 0;
}
