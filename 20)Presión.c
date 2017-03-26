/*Este programa determina la presi�n de un fluido 
en una jeringa hipod�rmica*/
#include<stdio.h>
#include<math.h>
#define R 1.1e-2
#define F 42
#define PI 3.1416
main()
{
	float p,a; /*p-> Presi�n, a->�rea*/
	a=PI*pow(R,2);
	p=F/a;
	printf("\n\n\tLa presi%cn que ejerce el fluido con una fuerza de %d[N] y un \n\t%crea de %e es: %e[Pa]",162,F,160,a,p);  
}	

