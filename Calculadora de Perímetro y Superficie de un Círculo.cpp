#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float r; float p; float s;

main(){
	printf("\nIngrese el radio de un circulo = ");
	scanf("%f",&r);
 	
 	p=2 * 3.1416 * r;
	s=3.1416 * r * r;
		
	printf("\nEl valor del perimetro es = %.2f", p);
	printf("\nEl valor de la superficie es = %.2f",s);

}