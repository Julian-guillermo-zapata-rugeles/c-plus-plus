/*
Julian Guillermo Zapata Rugeles

Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El mayor es 7
*/

#include <iostream>

using namespace std;

int main()
{
    int numeroA = 0 , numeroB = 0;
    cout << "Ingrese un numero A : ";
    cin >> numeroA;
    cout << "Ingrese un numero B : ";
    cin >> numeroB;
    if(numeroA>numeroB){
        cout << numeroA << "  es mayor que " << numeroB << endl;
    }
    else if(numeroA==numeroB){
        cout << "son iguales "<<endl;
    }
    else{
        cout << numeroB << " es mayor que " << numeroA << endl;
    }
    return 0;
}
