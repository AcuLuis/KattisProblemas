#include <iostream>
#include <string>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    if(n<1 && n>20) return 0;
    string word="";
    for(int i=0; i<n; i++){
        string objeto="";
        cin>>objeto;
        word = word+objeto;
    }
    int key=0, phone=0, wallet=0;
    if(word.find("keys")!=string::npos){
        key++;
    }
    if(word.find("phone")!=string::npos){
        phone++;
    }
    if(word.find("wallet")!=string::npos){
        wallet++;
    }

    if(key==0) cout<<"keys"<<endl;
    if(phone==0) cout<<"phone"<<endl;
    if(wallet==0) cout<<"wallet"<<endl;
    if(key!=0 && phone!=0 && wallet!=0) cout<<"ready"<<endl;

    return 0;
}
