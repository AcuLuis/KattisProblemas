#include <iostream>
#include <algorithm> // transform
#include <cctype> //tolower
using namespace std;
int main() {
    int n=0;
    cin>>n;
    cin.ignore();
    string todo="";
    for(int i=0; i<n; i++){
        string oracion;
        getline(cin, oracion);
        transform(oracion.begin(), oracion.end(), oracion.begin(), ::tolower);
        oracion[0]=toupper(oracion[0]);
        todo+=oracion+"\n";
    }
    cout<<todo;
    return 0;
}
