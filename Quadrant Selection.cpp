#include <iostream>
using namespace std;
int main() {
    int x=0,y=0;
    cin>>x;
    cin>>y;

    if((x>=-1000 && x<=1000 && x!=0) && (y>=-1000 && y<=1000 && y!=0)){
        if(x>0 && y>0){
            cout<<"1"<<endl;
        }else if(x<0 && y>0){
            cout<<"2"<<endl;
        }else if(x<0 && y<0){
            cout<<"3"<<endl;
        }else if(x>0 && y<0){
            cout<<"4"<<endl;
        }
    }

}
