#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	int n, num, c=1;
	printf("\nIngrese la cantidad de numeros = ");
	scanf("%d",&n);
	
	printf("Ingrese el valor de los %d numeros \n",n);
	
	for( int i=0; i<n; ++i){
		
		printf("\nIngrese el valor del numero %d = ",c, i+1);
		scanf("%d",&num);
		
		
		if(num<25){
			printf("El numero ingresado es menor a 25 \n");
			
		} else{
			printf("El numero ingresado es mayor a 25 \n");
	
		}
		c++;
	}
	
}