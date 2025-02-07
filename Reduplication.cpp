#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="";
    int n=0;
    cin>>s;
    cin>>n;
    if(s.size()>=2 && s.size()<=10){
        if(n>=1 && n<=9){
            string d = "";
            for(int i=0; i<n; i++){
                d = d+s;
            }
            cout<<d;
        }
    }
    return 0;
}
