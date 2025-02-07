#include<bits/stdc++.h>
using namespace std;
int main(){
        int n=0;
        int vs=1;
        while(cin>>n){
            if (n == 0){
                break;
            }
            int _min = 1000001;
            int _max = -1000001;
            int next=0;
            for (int i = 0; i < n; i++) {
                cin >> next;
                if (next < _min){
                  _min = next;
                }
                if (next > _max){
                  _max = next;
                }
            }
            cout << "Case " << vs << ": " << _min << " " << _max << " " << _max - _min << "\n";
            vs++;
        }
}
