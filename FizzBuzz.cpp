#include <iostream>
#include <vector>
using namespace std;
int main() {
    int x=0, y=0, n=0, i=0;
    cin>>x>>y>>n;
    string res="";
    for(int j=0; j<n; j++){
        if(((i+1)%x==0)&&((i+1)%y==0)){
            res += "FizzBuzz\n";
        }else if((i+1)%x==0){
            res += "Fizz\n";
        }else if((i+1)%y==0){
            res += "Buzz\n";
        }else{
            res += to_string(i+1)+"\n";
        }
        i++;
    }
    cout<<res;
    return 0;
}
