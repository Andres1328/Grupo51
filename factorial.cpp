//Programa que me calcula el factorial de un numero.

/*El faltorial de un numero es multiplicar el numero por los numeros anteriores
5!=5 X 4 X 3 X 2 X 1 = 120
*/ 

#include<iostream>
#include<stdlib.h>
using namespace std;

int i,n,factorial=1;
int main()
{
cout<<"ingrese un numero a factorial: "<<endl;
cin>>n;
	
	for(i=1;i<=n;i++)
	 {
	 	factorial = factorial*i;
	 	
	 	
	 }
	 cout<<"El factorial del numero "<<n<<": "<<factorial<<endl;
	 
	 system("pause");
}



/*

comentario
de
varias
lineas
*/
