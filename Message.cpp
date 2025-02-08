#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n=0, m=0;
    cin>>n>>m;
    vector<string> cuadros;
    string palabra="";
    for(int i=0; i<n; i++){
        string filas;
        cin>>filas;
        for(int j=0; j<m; j++){
            if(isalpha(filas[j])){
                palabra+=filas[j];
            }
        }
    }
    cout<<palabra<<endl;
    return 0;
}
