#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin>>word;
    if(word.size()>50) return 0;
    int cont_v=0, cont_v_y=0;
    for(char i: word){
        if(string("aeiou").find(i)!=string::npos){
            cont_v++;
        }
        if(i=='y'){
            cont_v_y++;
        }
    }
    cout<<(cont_v)<<" "<<(cont_v+cont_v_y)<<endl;
    return 0;
}
