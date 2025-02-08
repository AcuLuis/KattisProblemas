#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    vector<pair<int, double>> pares;
    for(int i=0; i<n; i++){
        int b=0;
        double p=0;
        cin>>b>>p;
        pares.push_back({b, p});
    }
    for(const auto& pair: pares){
        double bbb = (pair.first/pair.second)*60;
        double aaa = (60/pair.second);
        cout<<fixed<<setprecision(4)<<bbb-aaa<<" "<<bbb<<" "<<bbb+aaa<<endl;
    }
    return 0;
}
