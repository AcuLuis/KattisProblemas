#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 0, cont=0;
    bool val=false;
    cin>>n;
    if(n>=1 && n<=100){
        for(int i=0;i<n;i++){
            long int t=0;
            cin>>t;
            if(t>=-1e6 && t<=1e6){
                if(t<0){
                    cont++;
                }
            }else{
                val=true;
            }
        }
        if(val==false){
            cout<<cont<<endl;
        }
    }
}
