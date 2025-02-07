#include <iostream>
#include <string>
using namespace std;
int main(){
    string word;
    getline(cin, word);
    if(word.size()>=1 && word.size()<=1000){
        int pos=word.find("a");
        word.erase(0, pos);
        cout<<word<<endl;
    }

    return 0;
}
