#include <iostream>
using namespace std;
int main(){
    short m;
    cin>>m;
    if(m>=1 && m<=12){
        int cant=0;
        switch(m){
            case 1: cant=31; break;
            case 2: cant=28; break;
            case 3: cant=31; break;
            case 4: cant=30; break;
            case 5: cant=31; break;
            case 6: cant=30; break;
            case 7: cant=31; break;
            case 8: cant=31; break;
            case 9: cant=30; break;
            case 10: cant=31; break;
            case 11: cant=30; break;
            case 12: cant=31; break;
            default: cant=0; break;
        }
        cout<<cant<<endl;
    }
    return 0;
}
