#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    if(n>=1 && n<=2){
        bool val=false;
        vector<string> v;
        for(int i=0; i<n; i++){
            string opc;
            cin>>opc;
            v.push_back(opc);
            if(opc!="nautakjot" && opc!="kjuklingur"){
                val=true;
            }
        }
        if(!val){
            if(v.size()>1){
                if(v[0]==v[1]){
                    cout<<v[0]<<endl;
                }else{
                    cout<<"blandad best"<<endl;
                }
            }else{
                cout<<v[0]<<endl;
            }
        }
    }

    return 0;
}
