#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string cadena;
    cin>>cadena;
    vector<pair<char, int>> carta_H, carta_K, carta_P, carta_T;
    for(int i=0; i<cadena.size(); i+=3){
        char palo = cadena[i];
        int numero = 0;
        if(cadena[i+1]=='0'){
            numero = stoi(string(1, cadena[i+2]));
        }else{
            string num = string(1, cadena[i+1])+string(1, cadena[i+2]);
            numero = stoi(num);
        }
        if(palo=='P'){
            for(const auto& r: carta_P){
                if(r.second==numero){
                    cout<<"GRESKA"<<endl;
                    return 0;
                }
            }
            carta_P.push_back({palo,numero});
            sort(carta_P.begin(), carta_P.end());
        }else if(palo=='K'){
            for(const auto& r: carta_K){
                if(r.second==numero){
                    cout<<"GRESKA"<<endl;
                    return 0;
                }
            }
            carta_K.push_back({palo,numero});
            sort(carta_K.begin(), carta_K.end());
        }else if(palo=='H'){
            for(const auto& r: carta_H){
                if(r.second==numero){
                    cout<<"GRESKA"<<endl;
                    return 0;
                }
            }
            carta_H.push_back({palo,numero});
            sort(carta_H.begin(), carta_H.end());
        }else{
            for(const auto& r: carta_T){
                if(r.second==numero){
                    cout<<"GRESKA"<<endl;
                    return 0;
                }
            }
            carta_T.push_back({palo,numero});
            sort(carta_T.begin(), carta_T.end());
        }
    }
    cout<<13-carta_P.size()<<" "<<13-carta_K.size()<<" "<<13-carta_H.size()<<" "<<13-carta_T.size()<<endl;
    return 0;
}
