#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t=0;
    cin>>t;

    if(t>=1 && t<=1000){
        bool val=false;
        vector<string> signo;
        for(int i=0;i<t;i++){
            int day=0;
            string mes="";
            cin>>day>>mes;
            if(mes=="Jan"||mes=="Feb"||mes=="Mar"||mes=="Apr"
            || mes=="May"||mes=="Jun"||mes=="Jul"||mes=="Aug"
            || mes=="Sep"||mes=="Oct"||mes=="Nov"||mes=="Dec"){

                if(mes=="Jan"||mes=="Mar"||mes=="May"||mes=="Jul"
                 ||mes=="Aug"||mes=="Oct"||mes=="Dec"){

                    if(day>=1&&day<=31){
                        if(mes=="Jan"&&(day>=1&&day<=20)){
                            signo.push_back("Capricorn\n");
                        }
                        if(mes=="Jan"&&(day>=21)){
                            signo.push_back("Aquarius\n");
                        }
                        if(mes=="Mar"&&(day>=1&&day<=20)){
                            signo.push_back("Pisces\n");
                        }
                        if(mes=="Mar"&&(day>=21)){
                            signo.push_back("Aries\n");
                        }
                        if(mes=="May"&&(day>=1&&day<=20)){
                            signo.push_back("Taurus\n");
                        }
                        if(mes=="May"&&(day>=21)){
                            signo.push_back("Gemini\n");
                        }
                        if(mes=="Jul"&&(day>=1&&day<=22)){
                            signo.push_back("Cancer\n");
                        }
                        if(mes=="Jul"&&(day>=23)){
                            signo.push_back("Leo\n");
                        }
                        if(mes=="Aug"&&(day>=1&&day<=22)){
                            signo.push_back("Leo\n");
                        }
                        if(mes=="Aug"&&(day>=23)){
                            signo.push_back("Virgo\n");
                        }
                        if(mes=="Oct"&&(day>=1&&day<=22)){
                            signo.push_back("Libra\n");
                        }
                        if(mes=="Oct"&&(day>=23)){
                            signo.push_back("Scorpio\n");
                        }
                        if(mes=="Dec"&&(day>=1&&day<=21)){
                            signo.push_back("Sagittarius\n");
                        }
                        if(mes=="Dec"&&(day>=22)){
                            signo.push_back("Capricorn\n");
                        }
                    }else{
                        val=true;
                    }
                 }
                if(mes=="Apr"||mes=="Jun"||mes=="Sep"||mes=="Nov"){

                    if(day>=1&&day<=30){
                        if(mes=="Apr"&&(day>=1&&day<=20)){
                            signo.push_back("Aries\n");
                        }
                        if(mes=="Apr"&&(day>=21)){
                            signo.push_back("Taurus\n");
                        }
                        if(mes=="Jun"&&(day>=1&&day<=21)){
                            signo.push_back("Gemini\n");
                        }
                        if(mes=="Jun"&&(day>=22)){
                            signo.push_back("Cancer\n");
                        }
                        if(mes=="Sep"&&(day>=1&&day<=21)){
                            signo.push_back("Virgo\n");
                        }
                        if(mes=="Sep"&&(day>=22)){
                            signo.push_back("Libra\n");
                        }
                        if(mes=="Nov"&&(day>=1&&day<=22)){
                            signo.push_back("Scorpio\n");
                        }
                        if(mes=="Nov"&&(day>=23)){
                            signo.push_back("Sagittarius\n");
                        }
                    }else{
                        val=true;
                    }
                }
                if(mes=="Feb"){
                    if(day>=1&&day<=29){
                        if(day>=1 && day<=19){
                            signo.push_back("Aquarius\n");
                        }
                        if(day>=20){
                            signo.push_back("Pisces\n");
                        }
                    }else{
                        val=true;
                    }
                }
            }

        }
        if(val==false){
            for(string i:signo){
                cout<<i;
            }

        }
    }
}
