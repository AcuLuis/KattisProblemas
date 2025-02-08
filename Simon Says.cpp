#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main(){
    int repeticion=0;
    cin>>repeticion;
    if(repeticion<1 || repeticion>1000) return 0;
    vector<string> frases;
    cin.ignore();
    for(int i=0; i<repeticion; i++){
        string oracion="", ele="";
        getline(cin, oracion);
        stringstream ss(oracion);
        vector<string> words;
        while(getline(ss, ele, ' ')){
            words.push_back(ele);
        }
        if(words[0]=="Simon" && words[1]=="says"){
            string parrafo="";
            for(int i=2; i<words.size(); i++){
                parrafo=parrafo+words[i]+" ";
            }
            frases.push_back(parrafo);
        }
    }
    for(const auto& r: frases){
        cout<<r<<endl;
    }
    return 0;
}
