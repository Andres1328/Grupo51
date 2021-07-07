//Programa que diga el mayor de 10 numeros

#include<iostream>
#include<stdlib.h>

using namespace std;

float i=1,n,x=-9999999; //variables

int main ()
{
	for (i=1;i<=10;i++)  //Inicio del programa
	{
		cout<<"Digite el numero "<<i<<": ";
		cin>>n; //Ingreso de los numeros
		
		if (n>x) //condicion para numero mayor
	       x=n;
	}
	 
		cout<<"El numero mayor es: "<<x;	
system("pause");
}

