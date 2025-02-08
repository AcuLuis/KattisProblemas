#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin >> n;
    int suma=0, aux=0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if((i+1)%2!=0){
            aux=a;
        }else{
            suma+=(a-aux);
        }
    }
    if(n%2!=0){
        cout<<"still running"<<endl;
        return 0;
    }
    cout<<suma<<endl;
    return 0;
}
