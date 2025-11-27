#include <stdio.h>
#include <stdlib.h>

float perimetrorectangulo(float base1, float altura1);

main(){
	int i = 0, n = 0;
	float base,altura,s;
	
	printf("\n Ingrese la cantidad de veces que quiere agregar los lados de un rectangulo: ");
	scanf("%d",&n);
	
		
	
	while(i < n){
		
		printf("\nIngrese el valor de la base del rectangulo: ");
		scanf("%f",&base);
		
		printf("\nIngrese el valor de la altura del rectangulo: ");
		scanf("%f",&altura);
		
		s=perimetrorectangulo(base,altura);
		
		printf("\nEl valor del perimetro del rectangulo %d es: %.1f",i+1,s);
		printf("\n");
		i++;
	}
}

float perimetrorectangulo(float base1, float altura1){
	float s1;
	s1 = 2*(base1+altura1);
	return s1;
}