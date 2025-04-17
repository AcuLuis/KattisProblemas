#include <iostream>
using namespace std;
int main(){
    int a=0, b=0, c=0;
    cin>>a>>b>>c;
    if(a<90 && b<90 && c<90){
        cout<<"Spetsig Triangel"<<endl;
    }else if(a>90 || b>90 || c>90){
        cout<<"Trubbig Triangel"<<endl;
    }else{
        cout<<"Ratvinklig Triangel"<<endl;
    }
    return 0;
}
