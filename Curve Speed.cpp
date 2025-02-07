#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <iostream>
int main(){
int R,v;
double S;
while(cin>>R>>S){
        //if(( R>99 && R<5281 ) && ( S>0.009 && S<1.0)

         v=round(sqrt((R*(S+.16))/.067));
          printf("%d\n",v);
}


return 0;


}
