#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string word;
    getline(cin, word);
    if(word.size()<0 || word.size()>80){
        return 0;
    }
    int mayor=0;
    stringstream ss(word);
    string ele="";
    while(getline(ss, ele, ' ')){
        int a=0, e=0, i=0, o=0, u=0;
        transform(ele.begin(), ele.end(), ele.begin(), ::tolower);
        a = count(ele.begin(), ele.end(), 'a');
        e = count(ele.begin(), ele.end(), 'e');
        i = count(ele.begin(), ele.end(), 'i');
        o = count(ele.begin(), ele.end(), 'o');
        u = count(ele.begin(), ele.end(), 'u');
        mayor=mayor+(a+e+i+o+u);
    }
    cout<<mayor<<endl;
    return 0;
}
