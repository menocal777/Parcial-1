#include <iostream>

using namespace std;

int numero,digito,mayor,impares,pares;

int main()
{
    mayor=0;
    pares=0;
    impares=0;

    cout<<"Ingrese un Numero ";
    cin>>numero;
    cout<<"el numero es alrevez  ";

   while(numero>0)
   {    digito=numero%10;
        cout<<digito;
        numero=numero/10;

        if((digito%2)==0)
            pares++;
        else
            impares++;

            if(mayor<digito)
                mayor=digito;
   }
   cout<<"\n";
    cout<< "Numeros Pares "<<pares<<"\n";
    cout<< "Numeros Impares "<<impares<<"\n";
    cout<< "El numero mayor es "<<mayor<<"\n";
}
