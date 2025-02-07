#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int  main(){
    int n=0, m=0;
    cin>>n;
    cin>>m;
    if(n>=1 && n<=500){
        if(m>=1 && m<=500){
            double puntos=0, hasht=0;
            for(int i=0; i<m; i++){
                string bbb;
                cin>>bbb;
                if(bbb.size()==n){
                    puntos+=count(bbb.begin(), bbb.end(), '.');
                    hasht+=count(bbb.begin(), bbb.end(), '#');
                }else{
                    return 0;
                }
            }

            double prom = puntos/(puntos+hasht);
            cout<<prom<<endl;
        }
    }
    return 0;
}
