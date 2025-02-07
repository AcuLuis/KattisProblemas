#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0,m=0;

    cin>>n;
    m = n%10;
    n = (n-m)/10;
    if((n>=1 && n<=9)&&(m>=1 && m<=9)){
        cout<<(m*10)+n<<endl;
    }
}
