#include <iostream>
#include <string>
using namespace std;

int  main(){
    int n=0;
    cin>>n;
    if(n>=1 && n<=10){
        string todo="";
        for(int i=0; i<n; i++){
            string word;
            cin>>word;
            if(word.size()<1 && word.size()>100){
                return 0;
            }else{
                if((i+1)%2!=0){
                    todo=todo+word+"\n";
                }
            }
        }
        cout<<todo;
    }
    return 0;
}
