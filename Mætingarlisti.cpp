#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=0, r=0, c=0;
    cin>>n>>r>>c;
    vector<vector<string>> alumnos(r, vector<string>(c, ""));
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            string alu;
            cin>>alu;
            alumnos[i][j]= alu;
        }
    }
    vector<string> nombre;
    for(int i=0; i<n; i++){
        string nomb;
        cin>>nomb;
        nombre.push_back(nomb);
    }
    vector<string> posiciones;
    for(int i=0; i<r; i++){
        for(int j=0; j<nombre.size(); j++){
            if(alumnos[i][0]==nombre[j]){
                posiciones.push_back("left");
                break;
            }else if(alumnos[i][c-1]==nombre[j]){
                posiciones.push_back("right");
                break;
            }
        }
    }
    for(string c:posiciones){
        cout<<c<<endl;
    }
    return 0;
}
