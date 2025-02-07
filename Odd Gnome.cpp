#include<bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;

int posiciones(vector<int> arr) {
    int pos=0;
    for (int i = 1; i < arr.size() - 1; ++i) {
        if (arr[i] != arr[i - 1] + 1) {
            pos=i+1;
            break;
        }
    }
    return pos;
}

int main(){
    vector<int> valores;
    bool valida=false;
    int n=0;
    cin>>n;
    if(n>=1 && n<=100){
        for(int i=0; i<n; i++){
            vector<int> v;
            int g=0;
            cin>>g;
            for(int j=0; j<g; j++){
                int elemento=0;
                cin>>elemento;
                if(elemento>=0 && elemento<=10000){
                    v.push_back(elemento);
                }else{
                    valida=true;
                }
            }
            if(valida==false){
                int pos=posiciones(v);
                valores.push_back(pos);
            }
        }
    }
    if(valida==false){
        for(int i: valores){
            cout<<i<<endl;
        }
    }
}
