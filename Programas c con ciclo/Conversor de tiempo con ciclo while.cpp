#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


float x, m = 0, h = 0, c = 0, n ;

main(){

	printf("\nIngrese la cantidad de magnitudes a calcular = ");
	scanf("%f",&n);
	
	while(c<n) {

 	printf("\nIngrese la cantidad de tiempo en segundos a calcular = ");
 	scanf("%f",&x);
	
	printf("\nel tiempo sera de %g segundos", x);
	
	m = x / 60;
	printf("\nel tiempo sera de %.2f minutos", m);

	h = m / 60;
	printf("\nel tiempo sera de %.2f horas", h);
	
	c++;
	
	}
	
}