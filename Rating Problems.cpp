#include<bits/stdc++.h>

using namespace std;
int main(){

    int n=0, k=0;
    bool val=false;
    cin>>n>>k;
    if((n>=1 && n<=10) && (k>=0 && k<=n)){
        int resto = n-k;
        int suma=0;
        for(int i=0;i<k;i++){
            int ele=0;
            cin>>ele;
            if(ele<-3 && ele>3){
                val=true;
            }else{
                suma+=ele;
            }
        }
        if(val==false){
            double restomax = resto*(3);
            double restomin = resto*(-3);

            double maxi=(restomax+suma)/n;
            double mini=(restomin+suma)/n;
            cout<<mini<<" "<<maxi<<endl;
        }
    }


}
