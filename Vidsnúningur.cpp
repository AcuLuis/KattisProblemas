#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string word="";
    getline(cin, word);
    if(word.size()>=1 && word.size()<=1000){
        reverse(word.begin(), word.end());
        cout<<word<<endl;
    }
    return 0;
}
