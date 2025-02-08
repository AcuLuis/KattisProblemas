#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string nombre1, nombre2;
    cin>>nombre1;
    cin>>nombre2;
    string cadenatotal = nombre1+nombre2;
    sort(cadenatotal.begin(), cadenatotal.end());
    cout<<cadenatotal<<endl;
    return 0;
}
