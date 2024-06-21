#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int a, b , num, n, c = 0 ;

main(){
 	
	printf("\nIngrese un numero para iniciar el intervalo A = ");
 	scanf("%d",&a);
 	
 	printf("Ingrese un numero para iniciar el intervalo B = ");
 	scanf("%d",&b);
	
	printf("Ingrese la cantidad de numeros a usar = ");
	scanf("%d",&n);
		
	while(c<n){
		
 		printf("\nIngrese un numero = ");
 		scanf("%d",&num);	
 
 		if(a<num && b>num){
 			printf("El numero ingresado pertenece al intervalo\n");
		}	 
		else {
	 		printf("El numero ingresado no pertenece al intervalo\n");
		}
		c++;
	}	 
}