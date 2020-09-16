/*
Julian Guillermo Zapata Rugeles

Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
Ej: si se ingresa 5 se debe imprimir:
5 es impar
*/
#include <iostream>

using namespace std;

int main()
{
    int numero=0;
    cout << "Ingrese un numero para comprobar si es par o impar : ";
    cin >> numero ;
    if(numero%2==0){
        cout << "el numero "<<numero << " es par"<<endl;
    }else{
        cout << "el numero "<< numero <<" es impar"<<endl;;
    }
    return 0;
}
