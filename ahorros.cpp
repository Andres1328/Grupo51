#include<iostream>
using namespace std;

int a,b,suma;

int main()
{
	cout<<"Ingrese el valor que quiere ahorrar"<<endl;
	cin>>a;
	cout<<"Ingrese la cantidad que desea añadir al ahorro"<<endl;
	cin>>b;
	
	
	while (a >= suma)
	{
	cout<<"Ingrese la cantidad que desea añadir al ahorro"<<endl;
	cin>>b;
	suma = suma + b;
}
	cout<<suma;
	
}
