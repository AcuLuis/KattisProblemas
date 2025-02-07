#include <iostream>
using namespace std;
int main() {
    long long int num1, num2;

    while (cin >> num1 >> num2) {
        if(num1>num2){
            long long int d = num1 - num2;
            cout<<d<<endl;
        }else if (num1<num2){
            long long int d = num2 - num1;
            cout<<d<<endl;
        }else{
            long long int d = num1 - num2;
            cout<<d<<endl;
        }
    }

    return 0;
}
