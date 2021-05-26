/* este programa muestra los meses en dias, los dias en horas, las horas en minutos y minutos en segundos */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int cMeses, cDias, cHoras, cMin, cSeg;
	cout<<" *** este programa convierte los meses en diferentes tiempos ***";
	cout<<"\n \n ¿cuantos meses quieres convertir?---->  ";cin>>cMeses;
	cDias = cMeses * 30;
	cHoras = cDias * 24;
	cMin = cHoras * 60;
	cSeg = cMin * 60;
	cout<<"\n \n *** los meses equivalen a "<<cDias<<" dias";
	cout<<"\n \n *** los dias equivalen a "<<cHoras<<" horas";
	cout<<"\n \n *** las horas equivalen a "<<cMin<<" minutos";
	cout<<"\n \n  *** los segundos equivalen a "<<cSeg<<" segundos"<<endl;
	return 0;
}