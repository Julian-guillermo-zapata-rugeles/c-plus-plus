// crear una aproximación a euler usando la suma infinita  e=1/0! + 1/1! + 1/n! ...

#include <iostream>
#include <limits>
#include <float.h>
#include<iomanip>
#include <fprecision>
using namespace std;

int aproximation(long double  * , unsigned long int & );
int main()
{
    unsigned long int iterations=std::numeric_limits<unsigned long int>::max();
    long double euler_aprox=0, *pointerToEuler = &euler_aprox;
    //cout << "maximo = "<<iterations<<" limite"<< limite <<endl;
    cout << "Aproximacion al numero Euler " << endl;
    cout << "cantidad de ciclos : "; cin >> iterations;
    aproximation(pointerToEuler,iterations);
    cout << "La aproximacion a Euler es " << setprecision(100) <<*pointerToEuler<<endl;
    return 0;
}
int aproximation(long double *pointerToEuler , unsigned long int &iterations){
    long double sumatoria;
    long double limite= std::numeric_limits<long double>::max();
    for(unsigned long int i=0;i<iterations;i++){
        sumatoria=1 ;
        for(unsigned long int sub=1;sub<=i;sub++){
            if(sub!=0){
                sumatoria*=sub;
                if(sumatoria>limite){
                    cout << std::numeric_limits<long double>::max()<<" Limite teorico "<<endl;
                    return 0;
                }
            }
        }
        cout << sumatoria <<" iterations "<<i <<" from "<<iterations<< endl;
        //cout<<" --> "<<1<<"/"<<sumatoria <<" --> "<<(1/sumatoria)<<endl;
        *pointerToEuler+=(1/sumatoria);
    }
    return 0;
}
