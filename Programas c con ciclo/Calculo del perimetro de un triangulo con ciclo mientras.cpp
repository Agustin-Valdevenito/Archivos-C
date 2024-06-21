#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	int c = 0 , b , h , p, rec = 0, rect = 1;
	
	printf("\nIngrese la cantidad de rectangulos a los cuales les quiere sacar el perimetro = ");
	scanf("%d", &rec);
	
	while(c<rec) {
		 
	printf("\nIngrese la base y altura del rectangulo numero %d para calcular su perimetro" ,rect);
	
	printf("\nIngrese el valor de la base = ");
	scanf("%d",&b);
	
	printf("\nIngrese el valor de la altura = ");
	scanf("%d",&h);
	
	p = 2*(b+h);
	
	printf("\nEl valor del perimetro del rectangulo %d es %d ",rect, p);

	c++;
}
}