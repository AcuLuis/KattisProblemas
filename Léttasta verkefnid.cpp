#include <iostream>
#include <vector>
using namespace std;
int main() {
    int pelicula=0, puntaje=0;
    cin >> pelicula >> puntaje;
    vector <string> nomPelicula;
    for (int i=0; i<pelicula; i++){
        string peli;
        cin >> peli;
        nomPelicula.push_back(peli);
    }
    vector <vector <int>> notaPeli;
    for(int i=0; i<puntaje; i++){
        vector <int> nota;
        for(int j=0; j<pelicula; j++){
            int aux=0;
            cin >> aux;
            nota.push_back(aux);
        }
        notaPeli.push_back(nota);
    }
    vector<int> puntos;
    for(int i=0; i<pelicula; i++){
        int suma=0;
        for(int j=0; j<puntaje; j++){
            suma+=notaPeli[j][i];
        }
        puntos.push_back(suma);
    }
    int maxi=0, pos=0;
    for(int i=0; i<puntos.size(); i++){
        if(i==0){
            maxi=puntos[i];
            pos=i;
        }else{
            if(maxi<puntos[i]){
                maxi=puntos[i];
                pos=i;
            }
        }
    }
    cout<<nomPelicula[pos]<<endl;
    return 0;
}
