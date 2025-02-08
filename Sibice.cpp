#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main() {
    int n=0, h=0, w=0;
    cin>>n>>h>>w;
    if(n<1 || n>50) return 0;
    if(h<1 || h>100) return 0;
    if(w<1 || w>100) return 0;
    double hipo = sqrt(pow(h, 2)+pow(w, 2));
    vector<string> encajan;
    for(int i=0; i<n; i++){
        int medida=0;
        int cerillos=0;
        cin>>medida;
        if(medida<=h){
            cerillos++;
        }else if(medida<=w){
            cerillos++;
        }else if(medida<=hipo){
            cerillos++;
        }
        if(cerillos!=0){
            encajan.push_back("DA");
        }else{
            encajan.push_back("NE");
        }
    }
    for(int i=0; i<encajan.size(); i++){
        cout<<encajan[i]<<endl;
    }
    return 0;
}
