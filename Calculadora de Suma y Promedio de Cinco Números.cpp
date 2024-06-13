#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float num ; int c = 0; float s = 0; float p = 0; int cant=5;

main(){
 	
 	while(c<5){
		printf("\nIngrese %d numeros = ", cant);
	 	scanf("%f",&num);
	 	
		 s=s+num;
		 cant=cant-1;
		 c++;
	 }
	
	printf("\nEl valor de la suma es = %.0f", s);
	
	p= s/c;
	
	printf("\nEl valor del promedio es = %.2g ",p);

}