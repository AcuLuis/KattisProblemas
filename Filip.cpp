#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int a=0, b=0;
    cin>>a>>b;
    string num1 = to_string(a);
    string num2 = to_string(b);
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    a = stoi(num1);
    b = stoi(num2);
    if(a>b){
        cout<<a<<endl;
    }else{
        cout<<b<<endl;
    }
    return 0;
}
