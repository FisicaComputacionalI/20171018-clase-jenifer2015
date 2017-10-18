//Programa que suma los numeros imparepares entre el 1 y 20
//Autor: Dorantes Garcia Jenifer
//Creado el 176 de Octubre de 2017
#include <iostream>
using namespace std;
int main ()
{
 int sum=0;
 int count=1;
 while(count<=20){
     if ((count%2)==0){
       sum=sum+count;
      }
     count++;
 }
 cout<<sum<<endl;
return 0;
}
