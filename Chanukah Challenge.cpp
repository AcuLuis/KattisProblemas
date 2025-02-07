#include <iostream>
#include <vector>
using namespace std;
int main() {
    int p=0;
    cin>>p;
    if(p>=1 && p<=10000){
        vector<pair<int, int>> v;
        for(int i=0; i<p; i++){
            int idx=0, n=0;
            cin>>idx>>n;
            if(n<1 || n>10000){
                return 0;
            }
            v.push_back({idx, n});
        }
        int j=0;
        for(const auto &r: v){
            int val = r.second + ((r.second+1)*r.second)/2;
            v[j].second=val;
            j++;
        }
        for(const auto &r: v){
            cout<<r.first<<" "<<r.second<<endl;
        }
    }
    return 0;
}
