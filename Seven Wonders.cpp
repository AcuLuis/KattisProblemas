#include <iostream>
#include <vector>
using namespace std;
int main() {
    string cartas;
    cin>>cartas;
    int t=0, c=0, g=0;
    for(int i=0; i<cartas.size(); i++){
        if(cartas[i]=='T'){
            t++;
        }else if(cartas[i]=='C'){
            c++;
        }else{
            g++;
        }
    }
    int puntos_extra=0, t_aux=t, c_aux=c, g_aux=g;
    while(t_aux>0 && c_aux>0 && g_aux>0){
        puntos_extra+=7;
        t_aux--;
        c_aux--;
        g_aux--;
    }

    int res = t*t + c*c + g*g + (puntos_extra);
    cout<<res<<endl;
    return 0;
}
