#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int contador=0;
    vector<int> residuos;
    for (int i=0; i<10; i++){
        int num=0;
        cin>>num;
        if (num<0 || num>1000) return 0;
        int residuo = num%42;
        if(find(residuos.begin(), residuos.end(), residuo)== residuos.end()){
            residuos.push_back(residuo);
            contador++;
        }
    }
    cout<<contador<<endl;
    return 0;
}
