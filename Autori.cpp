#include <iostream>
#include <string>
using namespace std;
int main(){
    string word;
    getline(cin, word);
    if(word.size()>=1 && word.size()<=100){
        string inicial=string(1, word[0]);
        for(int i=0; i<word.size(); i++){
            if(word[i]=='-'){
                inicial=inicial+string(1,word[i+1]);
            }
        }
        cout<<inicial<<endl;
    }

    return 0;
}
