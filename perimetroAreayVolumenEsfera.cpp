/* este programa calcula el perimetro y area de circulos y volumen de esferas */
#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	float R, pC, aC, vEsf, pI=3.1416;
	cout<<" *** con este programa podras calcular perimetro y area de circulos y volumenes de esferas *** ";
	cout<<"\n \n ____----____----____ cuanto mide el radio del circulo? =====>   ";cin>>R;
	pC = 2 * pI * R;
	aC = pI * (pow(R,2));
	vEsf = (4/3) * pI * (pow(R,3));
	cout<<"\n \n el perimetro del circulo es:  "<<pC;
	cout<<"\n \n el area del circulo es:  "<<aC;
	cout<<"\n \n el volumen de la esfera es:  "<<vEsf<<endl;
	return 0;
}