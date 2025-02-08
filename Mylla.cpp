#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<string> cads;
    for(int i=0; i<3; i++){
        string cadena;
        cin>>cadena;
        cads.push_back(cadena);
    }
    bool ganoh=false, ganog=false;

    //horizontal
    if(cads[0][0]=='O' && cads[0][1]=='O' && cads[0][2]=='O') ganoh=true;
    if(cads[1][0]=='O' && cads[1][1]=='O' && cads[1][2]=='O') ganoh=true;
    if(cads[2][0]=='O' && cads[2][1]=='O' && cads[2][2]=='O') ganoh=true;
    //vertical
    if(cads[0][0]=='O' && cads[1][0]=='O' && cads[2][0]=='O') ganoh=true;
    if(cads[0][2]=='O' && cads[1][2]=='O' && cads[2][2]=='O') ganoh=true;
    if(cads[0][1]=='O' && cads[1][1]=='O' && cads[2][1]=='O') ganoh=true;
    //diagonal
    if(cads[0][0]=='O' && cads[1][1]=='O' && cads[2][2]=='O') ganoh=true;
    if(cads[0][2]=='O' && cads[1][1]=='O' && cads[2][0]=='O') ganoh=true;

    //horizontal
    if(cads[0][0]=='X' && cads[0][1]=='X' && cads[0][2]=='X') ganog=true;
    if(cads[2][0]=='X' && cads[2][1]=='X' && cads[2][2]=='X') ganog=true;
    if(cads[1][0]=='X' && cads[1][1]=='X' && cads[1][2]=='X') ganog=true;
    //vertical
    if(cads[0][0]=='X' && cads[1][0]=='X' && cads[2][0]=='X') ganog=true;
    if(cads[0][2]=='X' && cads[1][2]=='X' && cads[2][2]=='X') ganog=true;
    if(cads[0][1]=='X' && cads[1][1]=='X' && cads[2][1]=='X') ganog=true;
    //diagonal
    if(cads[0][0]=='X' && cads[1][1]=='X' && cads[2][2]=='X') ganog=true;
    if(cads[0][2]=='X' && cads[1][1]=='X' && cads[2][0]=='X') ganog=true;

    if(ganoh){
        cout<<"Jebb"<<endl;
    }else if(ganog){
        cout<<"Neibb"<<endl;
    }else{
        cout<<"Neibb"<<endl;
    }
    return 0;
}
