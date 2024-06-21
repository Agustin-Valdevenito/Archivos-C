#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int num, n, c = 0;

main(){
 	
 	printf("\nIngrese la cantidad de numeros a usar = ");
 	scanf("%d",&n);
 	
 	while(c<n){
	printf("\nIngrese un numero positivo o negativo = ");
 	scanf("%d",&num);
 	
 	if(num<0){
 		printf("\nEl numero ingresado es negativo");
		} 
	else {
		num=num*5;
			printf("\nEl numero ingresado es positivo y se lo multiplico por 5 \nEl valor es = %d", num);
		}
		c++;
	} 
	 	
}