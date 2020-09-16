/*

Julian Guillermo Zapata Rugeles 2020
Mostrar un patrón en pantalla usuando caracteres desde {A-G}


*/

#include <iostream>
using namespace std;

int main()
{
    char literals[7] = {};
    char positionA = 'A'; // encontramos la representación ascii
    unsigned short int counter=0;


    for(unsigned short int indice=positionA ; indice< positionA+7;indice++){
        // Generamos los elementos desde A --> G
        literals[counter]=char(indice); // añadido a literals
        counter++;
    }


    for(unsigned short int indice=1 ; indice <= 7 ; indice ++){
        /* creamos el patron en pantalla correspondiendte a
         * A
         * AB
         * ABC
         * etc...
         */
        unsigned short int internalCounter=0;
        for(unsigned short int subIndice=0; subIndice < indice; subIndice++){
            // imprimimos Linea a Linea y aumentando
            cout << literals[internalCounter];
            internalCounter++;
        }


        // Al conocer la base que forma la figura podemos restar la cantidad de elementos
        // impresos y conocer cuantos espacios en blanco podemos agregar a la línea

        unsigned short int baseShape= 14-(indice * 2) ; // ESPACIOS EN BLANCOS
        unsigned short int backFill= (14-baseShape)/2; //  LETRAS RESTANTES


        for(unsigned short int spaces=0;spaces < baseShape ; spaces ++){
            /*A ------------
            * AB-----------
            * ABC---------
            * etc ...
            */
            cout << ' ' ; // CARACTER SEPARADOR
        }
        for(unsigned short int endLiterals = backFill; endLiterals>0;endLiterals--){
           /* Por ultimo añadimos en orden Inverso desde G -> A
            * A ------------A
            * AB-----------BA
            * ABC---------CBA
            * etc ...
            */
            cout <<literals[endLiterals-1];
        }
        cout << endl; // saltamos línea para generar la próxima línea
    }

    return 0;
}
