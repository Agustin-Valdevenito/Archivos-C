#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


float x; float m = 0; float h = 0;

main(){
 	
 	printf("\nIngrese la cantidad de tiempo a calcular = ");
 	scanf("%f",&x);
	
	printf("\nel tiempo sera de %g segundos", x);
	
	m = x / 60;
	printf("\nel tiempo sera de %.2f minutos", m);

	h = m / 60;
	printf("\nel tiempo sera de %.2f horas", h);

	
}