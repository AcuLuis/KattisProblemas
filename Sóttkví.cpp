#include <iostream>
using namespace std;
int main() {
    int n=0, k=0, d=0;
    cin>>n>>k>>d;
    if(n<1 || n>1e3) return 0;
    if(k<1 || k>1e3) return 0;
    if(d<1 || d>1e3) return 0;
    int dCuar = k-(14-d);
    int asiste=0;
    for(int i=0; i<n; i++){
        int free=0;
        cin>>free;
        if(free<=dCuar){
            asiste++;
        }
    }
    cout<<asiste<<endl;
    return 0;
}
