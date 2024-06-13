#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int a; int b; int num;

main(){
 	
	printf("\nIngrese un numero para iniciar el intervalo A = ");
 	scanf("%d",&a);
 	
 	printf("\nIngrese un numero para iniciar el intervalo B = ");
 	scanf("%d",&b);
 		
 	printf("\nIngrese un numero = ");
 	scanf("%d",&num);	
 
 	if(a<num && b>num){
 		printf("\nEl numero ingresado pertenece al intervalo");
		} 
	else {
		 		printf("\nEl numero ingresado no pertenece al intervalo");

		}
	 
}