#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n=0, m=0;
    cin>>n>>m;
    vector<string> lineas;
    for(int i=0; i<n; i++){
        string puntos;
        cin>>puntos;
        lineas.push_back(puntos);
    }
    int suma=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char punto=lineas[i][j];
            if(punto=='.'){
                suma+=20;
            }else if(punto=='O'){
                suma+=10;
            }else if(punto=='\\'){
                suma+=25;
            }else if(punto=='/'){
                suma+=25;
            }else if(punto=='A'){
                suma+=35;
            }else if(punto=='^'){
                suma+=5;
            }else{
                suma+=22;
            }
        }
    }
    cout<<suma<<endl;
    return 0;
}
