#include<math.h>
#include<bits/stdc++.h>
#include <string>
using namespace std;

int tokens(string s){
int pos=s.find('+');
s[pos]=' ';
stringstream ss(s);
int suma,a,b;
ss>>a>>b;
suma=a+b;

return suma;
}

int main(){
string cad;
int n;
cin>>n;
while(n--){
   cin>>cad;
   if(cad[0]=='P'){
     cout<<"skipped\n";
    }else{
    cout<<tokens(cad)<<endl;
   }

}

}
