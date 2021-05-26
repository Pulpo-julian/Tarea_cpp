/* este programa muestra cuanto tarda un carro que viaja a 80cm por segundo de Rionegro a Medellin*/
#include <cmath>
#include <iomanip>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int vPrin, dTotal, tSeg, tMin, tHoras, segEnSem;
	float tSemanas;
	vPrin = 80;
	/* cantidad de segundos en una semana*/
	segEnSem = 604800;
	/* se convierte la distancia de Rionegro a Medellin en centimetros */
	dTotal = 5220000;
	/* se sabe que en un segundo se recorre 80 cm y si divido la distancia total entre 80 sabre la cantidad de segundos */
	tSeg = dTotal / vPrin;
	tMin = tSeg / 60;
	tHoras = tMin / 60;
	/* se usa el total de segundos en una semana (segEnSem) como denominador para saber cuantas semanas hay en el total de segundos del viaje (tSeg) */
	tSemanas = tSeg / segEnSem;
	cout<<"\n \n de Rionegro a Medellin hay "<<tSeg<<" segundos";
	cout<<"\n o tambien "<<tMin<<" minutos";
	cout<<"\n o tambien "<<tHoras<<" horas";
	cout<<"\n o si quieres saber el tiempo en semanas serian "<<tSemanas<<" semanas"<<endl;
	return 0; 
	
}