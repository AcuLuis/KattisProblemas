#include <bits/stdc++.h>
using namespace std;
int main() {
    int x=0,y=0;
    cin>>x>>y;
    if((x>=0 && x<=1000000) && (y>=0 && y<=1000000)){
        if(x<y){
            cout<<x<<" "<<y<<endl;
        }else if(x>y){
            cout<<y<<" "<<x<<endl;
        }else{
            cout<<x<<" "<<y<<endl;
        }
    }
}
