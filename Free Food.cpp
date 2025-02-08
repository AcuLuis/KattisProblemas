#include <iostream>
#include <set>
using namespace std;
int main() {
    int n=0;
    cin >> n;
    set<int> dias;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        for(int j=a; j<=b; j++){
            dias.insert(j);
        }
    }
    cout<<dias.size()<<endl;
    return 0;
}
