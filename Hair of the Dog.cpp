#include<iostream>
#include<vector>
using namespace std;

int main (){
    int n=0;
    cin>>n;
    vector<string> mapeo;
    for(int i=0; i<n; i++){
        string word;
        cin>>word;
        mapeo.push_back(word);
    }
    int cont=0;
    for(int j=0; j<mapeo.size()-1; j++){
        if(j>0){
            if(mapeo[j]=="drunk" && mapeo[j+1]=="sober"){
                cont++;
            }
        }
    }
    cout<<cont<<endl;
    return 0;
}
