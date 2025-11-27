#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void condicion(float num1, float &aux1, bool &condi1);

main(){
	
	int n;
	float num, aux;
	bool condi;
	
	
	printf("\n Ingrese la cantidad de veces que quiere repetir el proceso: ");
	scanf("%d",&n);
	
	for(int i = 0; i<n; i++){
		
		printf("\n Ingrese el numero %d que desee analizar si cumples las condiciones:",i+1);
		scanf("%f",&num);
		
		condicion(num,aux,condi);
		
		if(condi == true){
			
			printf("\n Es un numero negativo el que se ingreso");
		
		}
		else{
			printf("\n El multiplo de %.1f es %.1f",num,aux);
		}
	}
	
}

void condicion(float num1, float &aux1, bool &condi1){
	
	if (num1 > 0 and num1 != 0){
			
		aux1 = num1 * 5;
		condi1 = false;
		
	}
	else { 
		
		condi1 = true;
	}
}