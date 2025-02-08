#include <iostream>
#include <vector>
using namespace std;

string inicio_dias(int mes) {
    string dia;
    switch(mes) {
        case 1: dia = "Thursday"; break;
        case 2: dia = "Sunday"; break;
        case 3: dia = "Sunday"; break;
        case 4: dia = "Wednesday"; break;
        case 5: dia = "Friday"; break;
        case 6: dia = "Monday"; break;
        case 7: dia = "Wednesday"; break;
        case 8: dia = "Saturday"; break;
        case 9: dia = "Tuesday"; break;
        case 10: dia = "Thursday"; break;
        case 11: dia = "Sunday"; break;
        case 12: dia = "Tuesday"; break;
    }
    return dia;
}

int main() {
    vector<string> nom_dia = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string inicio;
    int dia = 0, mes = 0;
    cin >> dia >> mes;
    inicio = inicio_dias(mes);
    int inicio_index = 0;
    for(int i = 0; i < nom_dia.size(); i++) {
        if(nom_dia[i] == inicio) {
            inicio_index = i;
            break;
        }
    }
    int day_index = (inicio_index + (dia - 1)) % 7;
    cout << nom_dia[day_index] << endl;

    return 0;
}
