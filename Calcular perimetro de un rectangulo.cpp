#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int b; int h; int p = 0;

main(){
 	
	printf("\nIngrese el valor de la base del rectangulo = ");
 	scanf("%d",&b);
 
 	printf("\nIngrese el valor de la altura del rectangulo = ");
 	scanf("%d",&h);
 	
 	p = 2 *( b + h);
 
 	printf("\nEl valor del perimetro es %d" , p);
 	
 	
}