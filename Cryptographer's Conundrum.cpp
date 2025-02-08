#include <iostream>
using namespace std;
int main() {
    string word;
    cin>>word;
    int cont=0;
    for(int i=0; i<word.size(); i+=3){
        if(word[i]!='P'){
            cont++;
        }
        if(word[i+1]!='E'){
            cont++;
        }
        if(word[i+2]!='R'){
            cont++;
        }
    }
    cout<<cont<<endl;
    return 0;
}
