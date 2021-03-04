#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int factorial (int a);
int main()
{
    int N1;
cout<<"Introduzca el valor del numero: "<<endl;
cin>>N1;
int fact= (factorial)(N1);
cout<<"El factorial del numero es: "<<N1<<fact<<endl;
    return 0;
}

int factorial (int a)
{
    int i;
    int resultado=1;
    for (i=1;i<=a; i++)
    {
        resultado *=i;
    }
    return resultado;
}
