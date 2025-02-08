#include <iostream>
#include <string>
# include <cctype>
using namespace std;

int main() {
    string word;
    getline(cin, word);
    if(1<=word.size()<=100){
        int cont=0;
        for(char c: word){
            if(isalpha(c)){
                cont++;
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}
