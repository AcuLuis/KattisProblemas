#include <iostream>
#include <string>
using namespace std;
int main(){
    string b;
    getline(cin, b);
    if(b.size()>=1 && b.size()<=1000){
        cout<<b<<endl;
    }
    return 0;
}
