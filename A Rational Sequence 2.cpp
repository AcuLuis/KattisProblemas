#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
long obtener_valor(string m){
    vector<long> v;
    stringstream ss(m);
    string ele;
    while(getline(ss, ele, '/')){
        v.push_back(stol(ele));
    }
    long p = v.front();
    long q = v.back();
    vector<string> dir;
    while(p!=1 || q!=1){
        if(p>q){
            p=p-q;
            dir.push_back("R");
        }else{
            q=q-p;
            dir.push_back("L");
        }
    }
    reverse(dir.begin(), dir.end());
    long aux=1;
    for(const string& c: dir){
        if(c=="R"){
            aux=aux*2+1;
        }else{
            aux=aux*2;
        }
    }
    return aux;
}

int main(){
    int p=0;
    cin>>p;
    if (p>=1 && p<=1000){
        map<int, long> mapa;
        for(int i=0; i<p; i++){
            int k=0;
            string ex="";
            cin>>k>>ex;
            long result = obtener_valor(ex);
            mapa[k]= result;
        }
        for(const auto& r: mapa){
            cout<<r.first<<" "<<r.second<<endl;
        }

    }
}
