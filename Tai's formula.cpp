#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n=0;
    cin >> n;
    vector<double> tiempo;
    vector<double> vsus;
    for(int i=0; i<n; i++){
        double t, v;
        cin >> t >> v;
        tiempo.push_back(t);
        vsus.push_back(v);
    }
    double suma=0;
    for(int i=0; i<n-1; i++){
        double area;
        area = (vsus[i]+vsus[i+1])/2;
        suma += area*((tiempo[i+1]-tiempo[i])/1000);
    }
    cout<<fixed<<setprecision(5)<<suma<<endl;
    return 0;
}
