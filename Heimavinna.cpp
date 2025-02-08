#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int main() {
    string cadena;
    getline(cin, cadena);
    int cont=0;
    vector<vector<string>> todo_rango;
    string ele;
    stringstream ss(cadena);
    while(getline(ss, ele, ';')){
        vector<string> rangos;
        stringstream cc(ele);
        string e;
        while(getline(cc, e, '-')){
            rangos.push_back(e);
        }
    todo_rango.push_back(rangos);
    }
    for(int i=0; i<todo_rango.size(); i++){
        if(todo_rango[i].size()>1){
            int res = stoi(todo_rango[i][1]) - stoi(todo_rango[i][0]);
            cont+=res+1;
        }else{
            cont++;
        }
    }
    cout<<cont<<endl;
    return 0;
}
