#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float costoinicial, costofinal, costotal;

main(){
	
	printf("\nIngrese el valor del bien adquirido en el  extranjero = $");
	scanf("%f",&costoinicial);
	
	while(0<costoinicial){
	
	if(costoinicial<=1500){
		
		costofinal = ((costoinicial * 15)/100) + 200.00 + ((costoinicial * 2)/100);
		costotal = costofinal + costoinicial;
		
		printf("\nEl costo final de importacion sera de $%.2f", costofinal);
		printf("\nEl costo total de importacion sera de $%.2f", costotal);
	} 
		
	else{
	
		costofinal = ((costoinicial * 20)/100) + 200.00 + ((costoinicial * 2)/100);
		costotal = costofinal + costoinicial;
		
		printf("\nEl costo final de importacion sera de $%.2f", costofinal);
		printf("\nEl costo total de importacion sera de $%.2f", costotal);
	}
	
	printf("\nIngrese el valor del bien adquirido en el  extranjero = $");
	scanf("%f",&costoinicial);
	
	}
}