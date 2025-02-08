#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int n=0, m=0;
    cin>>n>>m;
    vector<int> lunes;
    vector<int> miercoles;
    for(int i=0; i<n; i++){
        int alu=0;
        cin>>alu;
        lunes.push_back(alu);
    }
    for(int i=0; i<m; i++){
        int alu=0;
        cin>>alu;
        miercoles.push_back(alu);
    }
    vector<int> diferencia;
    for(int i=0; i<lunes.size(); i++){
        for(int j=0; j<miercoles.size(); j++){
            if(lunes[i]==miercoles[j]){
                diferencia.push_back(lunes[i]);
            }
        }
    }
    for(int i=0; i<diferencia.size(); i++){
        cout<<diferencia[i]<<" ";
    }
    return 0;
}
