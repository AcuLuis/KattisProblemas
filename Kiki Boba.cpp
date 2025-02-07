#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int  main(){
    string word;
    getline(cin,word);
    int bb=0, kk=0;
    bb = count(word.begin(), word.end(), 'b');
    kk = count(word.begin(), word.end(), 'k');
    if(bb>kk){
        cout<<"boba"<<endl;
    }else if(kk>bb){
        cout<<"kiki"<<endl;
    }else if(kk==bb){
        if(kk==0){
            cout<<"none";
        }else{
            cout<<"boki";
        }
    }

    return 0;
}
