#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int num;

main(){
 	
	printf("\nIngrese el importe de la factura = ");
 	scanf("%d",&num);
 	
 
 	if(num>2500){
 		printf("\nEl importe sobrepaso los 2500, se pagara con un cheque");
		} 
	else {
			printf("\nEl importe es menor a los 2500, se pagara con efectivo");
		}
	 
	 
	 
 		
}