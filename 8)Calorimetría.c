/*Este algoritmo resuelve un problema de calorimetría*/
#include<stdio.h>
#define C 4184
#define T 16
#define M .5
main ()
{
	float energia;
	energia=C*T*M;
	printf("\nLa energ%ca necesaria para cambiar la temperatura de 21%cC a 37%cC es %.1f[J]",161,248,248,energia);
}

