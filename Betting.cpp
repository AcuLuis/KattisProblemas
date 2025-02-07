#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){

    double a=0, b=0;
    cin>>a;

    if(a>0 && a<100){
        b = 100-a;

        printf("%.10f\n", (100/a));
        printf("%.10f\n", (100/b));
    }
}
