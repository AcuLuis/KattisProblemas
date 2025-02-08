#include <iostream>
using namespace std;
int main() {
    string nombre;
    int a=0, b=0, ab=0;
    getline(cin, nombre);
    cin>>a;
    cin>>b;
    cin>>ab;
    if(ab>=0){
        if(b+ab==a){
            cout<<"VEIT EKKI"<<endl;
        }else{
            cout<<"SITH"<<endl;
        }
    }else{
        if(a-b==ab){
            cout<<"JEDI"<<endl;
        }
    }
    return 0;
}
