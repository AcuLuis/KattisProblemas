#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n=0;
    bool val=false;
    vector<string> resultados;
    cin>>n;
    if(n>=1 && n<=100){
        for(int i=0; i<n; i++){
            long int r=0,e=0, c=0;
            cin>>r>>e>>c;
            if(r>=-1e6 && r<=1e6 && e>=-1e6 && e<=1e6 && c>=0 && c<=1e6){
                if(r<e-c){
                    resultados.push_back("advertise");
                }else if(r>e-c){
                    resultados.push_back("do not advertise");
                }else if(r==e-c){
                    resultados.push_back("does not matter");
                }
            }else{
                val=true;
            }
        }
    }
    if(val==false){
        for(int i=0;i<resultados.size();i++){
            cout<<resultados[i]<<endl;
        }
    }
}
