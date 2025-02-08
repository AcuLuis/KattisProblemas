#include <iostream>
#include <vector>
using namespace std;
int main() {
    int ritmos=0;
    cin>>ritmos;
    vector<int> latidos;
    while(ritmos%2!=0){
        latidos.push_back(3);
        ritmos=ritmos-3;
    }
    while(ritmos%2==0 && ritmos>0){
        latidos.push_back(2);
        ritmos=ritmos-2;
    }
    cout<<latidos.size()<<endl;
    for(int c: latidos){
        cout<<c<<" ";
    }
    return 0;
}
