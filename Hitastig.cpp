#include <iostream>
using namespace std;
int main() {
    long long n=0, mini=0, maxi=0;
    cin>>n;
    for(int i=0; i<n; i++){
        long long temperature=0;
        cin>>temperature;
        if(i==0){
            mini=temperature;
            maxi=temperature;
        }else{
            if(mini>temperature){
                mini=temperature;
            }
            if(maxi<temperature){
                maxi=temperature;
            }
        }
    }
    cout<<maxi<<" "<<mini<<endl;
    return 0;
}
