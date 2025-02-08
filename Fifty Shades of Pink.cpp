#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    int n=0;
    cin >> n;
    int cont=0;
    for(int i=0; i<n; i++){
        string palabra="", word="";
        cin >> palabra;
        //pasar a minuscula
        for(char c: palabra){
            word+=tolower(c);
        }
        //buscar color
        for(int j=0; j<word.size(); j++){
            if(word[j]=='p' && word[j+1]=='i' && word[j+2]=='n' && word[j+3]=='k'){
                cont++;
                break;
            }else if(word[j]=='r' && word[j+1]=='o' && word[j+2]=='s' && word[j+3]=='e'){
                cont++;
                break;
            }
        }
    }
    if(cont>0){
        cout<< cont <<endl;
    }else{
        cout<<"I must watch Star Wars with my daughter"<<endl;
    }
    return 0;
}
