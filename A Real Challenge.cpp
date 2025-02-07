#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long int  n=0;
    cin>>n;
    if(n>=1 && n<=1e18){
        double area = sqrt(n)*4;
        printf("%.6lf", area);
    }
}
