#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void mayor (int a, int b);
int main()
{
   int N1,N2;
   cout<<"introduce el valor de a: "<<endl;
   cin>>N1;
   cout<<"introduce el valor de b: "<<endl;
   cin>>N2;
   mayor(N1,N2);
    return 0;
}
void mayor (int a, int b)
{
    if(a>b){
        cout<<"a es mayor \n"<<a<<endl;
    }
else if(a<b){
    cout<<"b es mayor \n"<<b<<endl;
}
}
