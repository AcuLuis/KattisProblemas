#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n=0;
    bool val=false;
    vector<string> resu;
    cin>>n;
    if(n>=1 && n<=10000){
        for(int i=0;i<n;i++){
            float a=0, b=0, c=0;
            cin>>a>>b>>c;
            if((a>=1 && a<=10000) && (b>=1 && b<=10000) && (c>=1 && c<=10000)){
                if(a+b==c){
                    string r = "Possible";
                    resu.push_back(r);
                }else if(a-b==c || b-a==c){
                    string r = "Possible";
                    resu.push_back(r);
                }else if(a/b==c || b/a ==c){
                    string r = "Possible";
                    resu.push_back(r);
                }else if(a*b==c){
                    string r = "Possible";
                    resu.push_back(r);
                }else{
                    string r = "Impossible";
                    resu.push_back(r);
                }
            }else{
                val=true;
            }
        }
        if(val==false){
            for(int i=0;i<resu.size();i++){
                cout<<resu[i]<<endl;
            }
        }
    }
}
