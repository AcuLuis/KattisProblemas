#include <iostream>
#include <string>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    if(n>100 || n<1) return 0;
    string iniciales="";
    for(int i=0; i<n; i++){
        string word;
        cin>> word;
        if(word.size()<1 || word.size()>1000) return 0;
        if(isupper(word[0])){
            iniciales=iniciales+word[0];
        }
    }
    cout<<iniciales<<endl;
    return 0;
}
