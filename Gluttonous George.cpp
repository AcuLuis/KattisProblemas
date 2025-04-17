#include<iostream>
using namespace std;
int main(){
    int n=0, m=0;
    char incog;
    cin>>n>>incog>>m;
    if(n>m){
       cout<<">"<<endl;
    }else if(n<m){
        cout<<"<"<<endl;
    }else{
        cout<<"Goggi svangur!"<<endl;
    }
    return 0;
}
