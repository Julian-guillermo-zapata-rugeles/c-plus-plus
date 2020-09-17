/*
Objetivo : este algoritmo captura un número EJEMPLO : 123
y realiza 1**1 + 2**2 + 3**3 ;

*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int  numeroPrueba = 0 , numeroSeparado = 0;
    int  suma = 0 ;
    bool salida = false ;

    cout << "Ingrese un numero para procesar: " ;
    cin >> numeroPrueba ;

    while (salida==false){
        numeroSeparado =  numeroPrueba % 10   ;
        cout << numeroSeparado << "^" << numeroSeparado << " = " << pow(numeroSeparado,numeroSeparado)<<endl;
        numeroPrueba = ceil(numeroPrueba/10) ;
        suma += pow(numeroSeparado,numeroSeparado);
        if(numeroPrueba==0){
            salida=true;
        }

    }
    cout << "la suma es : " <<suma << endl;
    return 0;
}
