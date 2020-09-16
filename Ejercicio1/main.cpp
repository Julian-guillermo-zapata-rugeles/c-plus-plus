/*
Julian Guillermo Zapata Rugeles
Ejercicio 1. Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
de la división A/B.
Ej: si se ingresan 8 y 3 se debe imprimir:
El residuo de la division 8/3 es: 2
Nota: Nótese que la palabra división no tiene tílde, esto no es un error tipográco, es debido a que
no se puede imprimir correctamente tíldes en la terminal. De ahora en adelante todos los ejemplos
de salidas contendrán el mismo error tipográco.

*/

#include <iostream>

using namespace std;

int main()
{
    int numeroA =0 , numeroB = 0 ;
    cout << "Ingrese el numero A : ";
    cin >> numeroA;
    cout << "Ingrese el numero B : ";
    cin >> numeroB;
    if(numeroB==0){
        cout<<"No se permite division por cero"<<endl;
        exit(1);
    }else{
        cout << "El residuo de la division "<< numeroA <<"/"<< numeroB <<" es " << (numeroA%numeroB) << endl;
    }
    return 0;
}
