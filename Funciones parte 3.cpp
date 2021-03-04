#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int Max(int a,int b);
int main()
{
    int N1,N2,N3;
    cout <<"Introduzca el valor del primer numero : "<<endl;
    cin>>N1;
    cout<<"Introduce el valor del segundo numero : "<<endl;
    cin>>N2;
    cout<<"Introduce el valor del tercer numero: "<<endl;
    cin>>N3;
    int max1=Max(N1,N2);
    int max2=Max(max1,N3);
    cout<<"el numero mayor es: "<<max2<<endl;

    return 0;
}

int Max(int a,int b)
{
    int c;
    if(a>b){c=a;}
    else {c=b;}
    return c;
}
