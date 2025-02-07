#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0; i<15; i++){
        int dulce=0, agria=0;
        cin>>dulce>>agria;
        if((dulce>=0 && dulce<=1000)&&(agria>=0&&agria<=1000)){
            if(dulce!=0 || agria!=0){
                if(dulce==agria){
                    cout<<"Undecided.\n";
                }else{
                    if(dulce+agria==13){
                        cout<<"Never speak again.\n";
                    }else{
                        if(dulce>agria){
                            cout<<"To the convention.\n";
                        }else{
                            cout<<"Left beehind.\n";
                        }
                    }
                }
            }else{
                break;
            }
        }
    }
}
