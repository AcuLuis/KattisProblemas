#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int main() {
    string linea1, linea2;
    getline(cin, linea1);
    getline(cin, linea2);

    vector<string> datos1;
    stringstream ss(linea1);
    string element1;
    while(getline(ss, element1, '|')){
        datos1.push_back(element1);
    }

    vector<string> datos2;
    stringstream mm(linea2);
    string element2;
    while(getline(mm, element2, '|')){
        datos2.push_back(element2);
    }
    string verso = datos1[0]+datos2[0]+" "+datos1[1]+datos2[1];
    cout<<verso<<endl;
    return 0;
}
