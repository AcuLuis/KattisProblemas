#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    vector<int> nudosAprende;
    for(int i=0; i<n; i++){
        int idx=0;
        cin>>idx;
        nudosAprende.push_back(idx);
    }
    vector<int> nudosAprendi;
    for(int i=0; i<n-1; i++){
        int idx=0;
        cin>>idx;
        nudosAprendi.push_back(idx);
    }
    sort(nudosAprende.begin(), nudosAprende.end());
    sort(nudosAprendi.begin(), nudosAprendi.end());
    vector<int> diferencia;
    set_difference(nudosAprende.begin(), nudosAprende.end(), nudosAprendi.begin(), nudosAprendi.end(), back_inserter(diferencia));
    cout<<diferencia[0]<<endl;
    return 0;
}
