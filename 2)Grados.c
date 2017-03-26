/*Este programa convierte de grados Celsius a Fahrenheit*/
#include<stdio.h>
#define p printf
#define s scanf
#include<stdlib.h>
main()
{
	int c; /*Celsius*/
	float f; /*Fahrenheit*/
	p("\n\n\tHola, teclee los grados Celsius que desea convertir\n\t");
	s("%d",&c);
	f=32+(9/5.0)*c;
	system("cls");
	p("\n\n\tLa conversi%cn de %d grados Celsius es %.2f grados Fahrenheit",162,c,f);
	
}

