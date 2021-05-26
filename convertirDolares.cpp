/* este programa convierte dolares en Euros, Yenes y Pesos Mexicanos */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float cantDolares, cE, cY, cPesMex;
	cout<<"\n \n *** Este programa calcula el monto de dolares para transformarlo en otras monedas *** ";
	cout<<"\n \n _____-----_____-----_____ Cuantos dolares Tienes? :  ";cin>>cantDolares;
	cE = cantDolares * 0.8;
	cY = cantDolares * 108.7;
	cPesMex = cantDolares * 19.90;
	cout<<"\n \n tus Dolares en valor de Euros son:  "<<cE;
	cout<<"\n \n tus Dolares en valor de Yenes son:  "<<cY;
	cout<<"\n \n tus Dolares en valor de Pesos Mexicanos son:  "<<cPesMex<<endl;
	return 0;
}