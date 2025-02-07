#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string mes;
    int dia;
    string res;

    cout<<"";
    cin>>mes>>dia;

    if(dia>=1 && dia<=31){
        if(mes=="JAN" || mes=="FEB" ||mes=="MAR" ||mes=="APR" ||mes=="MAY" ||mes=="JUN" ||mes=="JUL" ||mes=="AUG" ||mes=="SEP" ||
            mes=="OCT" ||mes=="NOV" ||mes=="DEC"){
            if((dia==31 && mes =="OCT") || (dia==25 && mes =="DEC")){

                res = "yup\n";
            }else{
                res = "nope\n";
            }

            cout<<res;
        }
    }
}
