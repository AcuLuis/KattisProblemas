#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    int n=0;
    cin >> n;
    map<string, int> participa;
    for(int i=0; i<n; i++){
        string nombre, ubicacion;
        cin >> nombre;
        cin >> ubicacion;
        participa[ubicacion]+=1;
    }
    for(const auto r: participa){
        cout<<r.first<<" "<<r.second<<endl;
    }
    return 0;
}
