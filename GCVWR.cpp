#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int G=0, T=0, N=0;

    cin>>G>>T>>N;
    if((G>=5000 && G<=25000) && (T>=3000 && T<=12000) && (N>=1 && N<=100)){
        if(G%10==0 && T%10==0){
            int suma=0;
            for (int i = 0; i < N; ++i){
                int num=0;
                cin >> num;
                suma = suma + num;
            }
            cout<<((G-T)*0.9)-suma;

        }
    }

}
