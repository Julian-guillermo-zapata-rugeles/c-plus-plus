/*
Julian Guillermo Zapata Rugeles
2020

blema 2. Se necesita un programa que permita determinar la mínima combinación de billetes
y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
$20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Hacer un programa que entregue el número de billetes y monedas de cada denominación para com-
pletar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
cantidad deseada, el sistema deberá decir lo que resta para lograrla.
Ej: si se ingresa 47810, el programa debe imprimir:
50000 : 0
20000: 2
10000 : 0
5000: 1
2000 : 1
1000: 0
500 : 1
200: 1
100 : 1
50: 0
Faltante: 10

*/
#include <iostream>
#include <math.h>  // incluiré la libreria math para el uso de ceil()
#include <iomanip> // incluiré la libreria i/o manipulation para usar setw() en cout y left para alinear

using namespace std;

int main()
{
    long int moneyEntered=0 , aux_coins=0;
    unsigned int exchanges[]={50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 500 };
    unsigned int denominations = sizeof(exchanges)/sizeof(exchanges[0]); // hallamos la cantidad de elementos


    cout << "Ingrese la cantidad de dinero a procesar : " ; cin >> moneyEntered ;


    if(moneyEntered<0){
        cout<< "Es necesario que ingrese cifras positivas para continuar. Intente nuevamente " << endl;
        exit(1);
    }
    cout << "----------------------- Retorno -------------------------"<<endl;
    for(unsigned int indice = 0; indice < denominations ; indice ++ ){
        // iteraremos sobre el array int de posibles cambios , a su véz restaremos al valor moneyEntered
        // la division entera posible de billetes de la denominación en ciclo.
        aux_coins = ceil(moneyEntered/exchanges[indice]);
        moneyEntered-=exchanges[indice] * aux_coins ;
        cout << setw(20) << left << exchanges[indice] << aux_coins<<" Unidades" << endl;
    }
    if(moneyEntered!=0){
        cout<< setw(20) << left << "restante " << moneyEntered <<endl;
    }
    return 0;
}
