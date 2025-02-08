#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    int n=0;
    cin>>n;
    vector<int> edx;
    for(int i=1; i<=n; i++){
        int var=0;
        cin>>var;
        edx.push_back(var);
    }
    reverse(edx.begin(), edx.end());
    for(int t:edx){
        cout<<t<<endl;
    }
    return 0;
}
