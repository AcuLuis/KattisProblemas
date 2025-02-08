#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>
using namespace std;
int main() {
    int n=0, m=0;
    cin>>n>>m;
    if((1<=n<=100)&&(1<=m<=100)){
        vector<string> lineas;
        for(int i=0; i<n; i++){
            string linea;
            cin>> linea;
            if(linea.size()>m || linea.size()<m) return 0;
            for(int k=0; k<linea.size(); k++){
                if(linea[k]!='.' && linea[k]!='*') return 0;
            }
            lineas.push_back(linea);
        }
        vector<pair<int, int>> coordenada;
        int minas=0;
        for (int i = 0; i < lineas.size(); i++) {
            size_t pos = 0;
            while ((pos = lineas[i].find('*', pos)) != string::npos) {
                coordenada.push_back({i + 1, pos + 1});
                minas++;
                pos++;
            }
        }

        cout<<minas<<endl;
        for(const auto& c: coordenada){
            cout<<c.first<<" "<<c.second<<endl;
        }
    }
    return 0;
}
