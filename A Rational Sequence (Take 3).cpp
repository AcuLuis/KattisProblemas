#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
string movimiento(long m){
    vector<string> v;
    while(m!=1){
        if(m%2==0){
            v.push_back("L");
        }else{
            v.push_back("R");
        }
        m=m/2;
    }
    reverse(v.begin(), v.end());
    int p=1;
    int q=1;
    for(const auto &r: v){
        if(r=="L"){
            q = p+q;
        }else{
            p = p+q;
        }
    }
    ostringstream s;
    s<<p<<"/"<<q;
    string res = s.str();
    return res;
}

int main(){
    int p=0;
    cin>>p;
    map<int, long> mapa;
    bool band = false;
    if(p>=1 && p<=1000){
        for(int i=0; i<p; i++){
            int k=0;
            long n=0;
            cin>>k>>n;
            if(n>=1 && n<=2147483647){
                mapa[k] = n;
            }else{
                band = true;
            }
        }
        if(band==false){
            vector<string> todo;
            for(const auto &r:mapa){
                ostringstream f;
                f<<r.first<<" "<<movimiento(r.second);
                string cad = f.str();
                todo.push_back(cad);
            }
            for(string t: todo){
                cout<<t<<endl;
            }
        }
    }

}
