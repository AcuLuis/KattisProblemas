#include <iostream>
#include <string>
using namespace std;

int main() {
    string msm;
    getline(cin, msm);
    int smile=0, sad=0;
    for(int i=0; i<msm.size(); i++){
        if((msm[i]==':') && (msm[i+1]==')')){
            smile++;
        }else if((msm[i]==':') && (msm[i+1]=='(')){
            sad++;
        }
    }
    if(smile==0 && sad==0){
        cout<<"machine"<<endl;
    }else{
        if(smile>=1 && sad==0){
            cout<<"alive"<<endl;
        }else if(smile==0 && sad>=1){
            cout<<"undead"<<endl;
        }else{
            cout<<"double agent"<<endl;
        }
    }
    return 0;
}
