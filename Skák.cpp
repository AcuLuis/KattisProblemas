#include <iostream>
using namespace std;

int  main(){
    int x_t=0, y_t=0;
    int x_p=0, y_p=0;

    cin>>x_t>>y_t;
    cin>>x_p>>y_p;

    if((x_t==x_p)&&(y_t==y_p)){
        return 0;
    }else{
        if((x_t==x_p)||(y_t==y_p)){
            cout<<1;
        }else{
            cout<<2;
        }
    }
    return 0;
}
