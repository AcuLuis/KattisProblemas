#include <iostream>
#include <string>

using namespace std;

int main() {
    const int maxCaracteres = 10000;
    string entrada, salida;

    cout << "";
    getline(cin, entrada);

    if (entrada.length() < maxCaracteres) {

        for (char letra : entrada) {
            letra = tolower(letra);
            switch (letra) {
                case 'a':
                    salida += "@";
                    break;
                case 'b':
                    salida += "8";
                    break;
                case 'c':
                    salida += "(";
                    break;
                case 'd':
                    salida += "|)";
                    break;
                case 'e':
                    salida += "3";
                    break;
                case 'f':
                    salida += "#";
                    break;
                case 'g':
                    salida += "6";
                    break;
                case 'h':
                    salida += "[-]";
                    break;
                case 'i':
                    salida += "|";
                    break;
                case 'j':
                    salida += "_|";
                    break;
                case 'k':
                    salida += "|<";
                    break;
                case 'l':
                    salida += "1";
                    break;
                case 'm':

                    salida += "[]\\/[]";
                    break;
                case 'n':
                    salida += "[]\\[]";
                    break;
                case 'o':
                    salida += "0";
                    break;
                case 'p':
                    salida += "|D";
                    break;
                case 'q':
                    salida += "(,)";
                    break;
                case 'r':
                    salida += "|Z";
                    break;
                case 's':
                    salida += "$";
                    break;
                case 't':
                    salida += "']['";
                    break;
                case 'u':
                    salida += "|_|";
                    break;
                case 'v':
                    salida += "\\/";
                    break;
                case 'w':

                    salida += "\\/\\/";
                    break;
                case 'x':
                    salida += "}{";
                    break;
                case 'y':
                    salida += "`/";
                    break;
                case 'z':
                    salida += "2";
                    break;
                default:
                    salida += letra;
                    break;
            }
        }
    }
    cout << salida << endl;

    return 0;
}
