#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    if(t<0 || t>50) return 0;
    vector<int> viajes;
    for(int i=0; i<t; i++){
        unordered_set<string> viaje;
        int n=0;
        cin>>n;
        if(n<1 || n>100) return 0;
        for(int j=0; j<n; j++){
            string ciudad;
            cin>>ciudad;
            if(ciudad.size()<1 || ciudad.size()>20) return 0;
            viaje.insert(ciudad);
        }
        viajes.push_back(viaje.size());
    }
    for(int zz: viajes){
        cout<<zz<<endl;
    }
    return 0;
}
