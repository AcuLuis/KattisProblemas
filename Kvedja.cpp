#include <iostream>
#include <string>
using namespace std;
int main(){
    string w;
    cin>>w;
    if(w.size()>=1 && w.size()<=100){
        cout<<"Kvedja,"<<endl<<w;
    }
    return 0;
}
