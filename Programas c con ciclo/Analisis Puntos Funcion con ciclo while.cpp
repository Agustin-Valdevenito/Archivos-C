#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	int n, x, y , c = 0, ecu; 
	
	printf("\nIngrese la cantidad de pares de valores a ingresar = ");
 	scanf("%d",&n);
 	
 	while(c<n){
 		
 		printf("\nIngrese el valor de x para el par ordenado = ");
 		scanf("%d",&x);
 		
 		printf("\nIngrese el valor de y para el par ordenado = ");
 		scanf("%d",&y);
 		
 		printf("\nEl par ordenado es (%d,%d)",x,y);
 		ecu = 3*x+5;
 	
 		if( ecu == y){
 			printf("\nEl punto esta en la funcion\n");
		 }else if(ecu < y){
		 	printf("\nEl punto esta debajo de la funcion\n");
		 }else{
		 	printf("\nEl punto esta arriba de la funcion\n");
		 }
 	
 	c++;
	 }
}