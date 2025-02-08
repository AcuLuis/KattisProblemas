#include <iostream>
#include <vector>
using namespace std;
int main() {
    int separa=0;
    cin>>separa;
    vector<string> figura;
    for(int i=0; i<2+separa; i++){
        string cadena="";
        for(int j=0; j<2+separa; j++){
            if(((i==0&&j==0)||(i==0&&j==separa+1)||(i==separa+1&&j==0)
                ||(i==separa+1&&j==separa+1))){
                cadena+="+";
            }else if(i==0 || i==1+separa){
                cadena+="-";
            }else if(j==0 || j==1+separa){
                cadena+="|";
            }else{
                cadena+=" ";
            }
        }
        figura.push_back(cadena);
    }
    for(string c: figura){
        cout<<c<<endl;
    }
    return 0;
}
