/*
Problema 1. Escriba un programa que identifique si un carácter ingresado es una vocal, una con-
sonante o ninguna de las 2 e imprima un mensaje según el caso.
Nota: el formato de salida debe ser:
no es una letra.
a es una vocal.

Julian Guillermo Zapata Rugeles
2020
*/


#include <iostream>
using namespace std;

int main()
{
    unsigned short int start_char_represent=int('a'); // hallamos su equivalente int al char 'a' in ascii;
    unsigned short int end_char_represent=int('z'); // ---   ---   ---   ---   ---   ---   'z' in ascii;
    char user_probe = 0;
    char vocals[]={'a','e','i','o','u'};


    cout << "Ingrese un caracter : " ; cin >> user_probe;
    if(isupper(user_probe)){
        // Pasamos char en mayusculas a minusculas.
        user_probe=tolower(user_probe);
    }

    if(int(user_probe)>=start_char_represent && int(user_probe)<=end_char_represent){
        // analizamos si user_probe está entre el int char a --> int char z
        // de ser así primero descartamos que no sea una vocal para no gastar más recursos en la busqueda.
        // si el primer ciclo for no da resultado buscaremos ahora en el intervalo mayor a --> z
        for(unsigned short int indice = 0 ; indice <= 4 ; indice++ ){
            if(vocals[indice]==user_probe){
                cout << user_probe << " es una vocal "<<endl;
                exit(0); // es vocal por lo que no es necesario buscar más, se ordena salir.
            }
        }
        for ( unsigned short int min = start_char_represent ; min <= end_char_represent ; min++) {
            if(user_probe==char(min)){
                // si user_probe es un caracteri igual y anteriormente fue descartado en vocales
                // de ser así será una consonante para este ciclo.
                cout << user_probe << " es una consonante " << endl;
                exit(0);
            }
        }
    }
    else{
        cout << user_probe << " No es vocal ni consonante " << endl;
    }

    return 0;
}
