#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> serie;
    int n=0, k=0, entrada=0;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>entrada;
        if((i+1)%k==0){
            serie.push_back(entrada);
        }
    }
    for(auto& r: serie){
        cout<<r<<" ";
    }
    return 0;
}
