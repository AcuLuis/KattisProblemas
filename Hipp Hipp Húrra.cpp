#include <iostream>
#include <string>
using namespace std;
int main(){
    string nombre;
    int repe;
    getline(cin,nombre);
    cin>>repe;
    for(int i=0; i<repe; i++){
        cout<<"Hipp hipp hurra, "+nombre+"!"<<endl;
    }
    return 0;
}
