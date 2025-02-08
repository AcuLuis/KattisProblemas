#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string cpr;
    cin>>cpr;
    vector<int> valores = {4,3,2,7,6,5,4,3,2,1};
    int cont=0, sum=0;
    for(char c: cpr){
        if(c!='-'){
            sum+=((c-'0')*valores[cont]);
            cont++;
        }
    }
    if(sum%11==0){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}
