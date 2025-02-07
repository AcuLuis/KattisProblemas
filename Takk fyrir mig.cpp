#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    if(n>=1 && n<=1000){
        vector<string> noms;
        for(int i=0; i<n; i++){
            string nombre="";
            cin>>nombre;
            noms.push_back(nombre);
        }
        for(int i=0; i<noms.size(); i++){
            cout<<"Takk "+noms[i]<<endl;
        }
    }
    return 0;
}
