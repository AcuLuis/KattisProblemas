#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n=0, p=0, c=0;
    cin >> n >> p >> c;
    vector<string> output;
    for(int i=0; i<c; i++){
        int aux=0;
        bool val=false;
        cin >> aux;
        for(int j=0; j<aux; j++){
            int j_aux=0;
            cin>>j_aux;
            if(j_aux==p){
                val=true;
            }
        }
        if(val){
            output.push_back("KEEP");
        }else{
            output.push_back("REMOVE");
        }
    }
    for(string c: output){
        cout<<c<<endl;
    }
    return 0;
}
