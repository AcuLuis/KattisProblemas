#include <iostream>
using namespace std;
int main(){
    string paciente;
    string doctor;
    cin>>paciente;
    cin>>doctor;
    if(paciente[paciente.size()-1]!='h') return 0;
    if(doctor[doctor.size()-1]!='h') return 0;
    for(int i=0; i<paciente.size()-1; i++){
        if(paciente[i]!='a') return 0;
    }
    for(int i=0; i<doctor.size()-1; i++){
        if(doctor[i]!='a') return 0;
    }
    if(paciente.size()<0 || paciente.size()>1000) return 0;
    if(doctor.size()<0 || doctor.size()>1000) return 0;
    if(paciente.size()>=doctor.size()){
        cout<<"go"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}
