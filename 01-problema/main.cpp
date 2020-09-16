/*  Objetivo : Crear una figura en la consola usando caracteres Ascii
 *
 */


#include <iostream>
#include <string>

using namespace std;
void generarPatronSuperior(void);

int main()
{
    generarPatronSuperior();
    return 0;
}

void generarPatronSuperior(void){
    string backSentece[]={};
    short int base=11;
    short int backSentenceIndice=0;
    for(unsigned short int indice=0; indice<6; indice ++ ){
        for(unsigned short int caracter=0 ;caracter<=indice;caracter++){
            cout << char('A'+caracter) ;
        }
        for(short int subIndice=0;subIndice<base;subIndice++){
            if(base==1){
                cout << 'G';
            }else{
                cout <<'-';
            }

        }
        for(short int backChar=((12-base)/2);backChar>=0;backChar--){
            cout << char('A'+backChar);
        }
        cout <<endl;
        base=base-2;
    }

}

