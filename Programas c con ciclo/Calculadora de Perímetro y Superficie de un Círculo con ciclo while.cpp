#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float r, p , s, c = 0, n;

main(){
	printf("\nIngrese la cantidad de radios de cirulos a usar = ");
	scanf("%f",&n);
	
	while(c<n){
		printf("\nIngrese el radio de un circulo = ");
		scanf("%f",&r);
 	
 		p=2 * 3.1416 * r;
		s=3.1416 * r * r;
		c++;
		printf("\nEl valor del perimetro es = %.2f", p);
		printf("\nEl valor de la superficie es = %.2f\n",s);
	}


}