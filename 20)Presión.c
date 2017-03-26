/*Este programa determina la presión de un fluido 
en una jeringa hipodérmica*/
#include<stdio.h>
#include<math.h>
#define R 1.1e-2
#define F 42
#define PI 3.1416
main()
{
	float p,a; /*p-> Presión, a->Área*/
	a=PI*pow(R,2);
	p=F/a;
	printf("\n\n\tLa presi%cn que ejerce el fluido con una fuerza de %d[N] y un \n\t%crea de %e es: %e[Pa]",162,F,160,a,p);  
}	

