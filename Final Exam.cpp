#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<char> resp;
    int n=0, cont=0;
    cin>>n;
    for(int i=0; i<n; i++){
        char x;
        cin>>x;
        resp.push_back(x);
    }
    for(int j=0; j<resp.size()-1; j++){
        if(resp[j]==resp[j+1]){
            cont++;
        }
    }
    cout<<cont<<endl;
    return 0;
}
