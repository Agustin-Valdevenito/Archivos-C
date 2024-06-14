#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float ingfamiliar, anticipo, plazopago, interestotal, saldofinanciar;
const float hipoteca = 1800000;

main(){
	
	printf("\nIngrese el monto mensual del grupo familiar = $");
	scanf("%f",&ingfamiliar);
	
	if(ingfamiliar>=95000 && ingfamiliar<=120000){
		
	anticipo = (hipoteca * 15)/100;
	saldofinanciar = hipoteca - anticipo;
	interestotal = ((saldofinanciar * 200 )/100) + saldofinanciar;
	plazopago = interestotal / 180;

	printf("\nEl monto del anticipo a pagar es de $%.2f", anticipo);
	printf("\nLa cantidad de cuotas a pagar son 180");
	printf("\nEl monto de cada cuota a pagar sera de $%.2f",plazopago);
		
	} 



	else if(ingfamiliar>120000){
		
		anticipo=(hipoteca * 20)/100;
		saldofinanciar = hipoteca - anticipo;
		interestotal = ((saldofinanciar * 110 )/100) + saldofinanciar;
		plazopago = interestotal / 120;
		
		printf("\nEl monto del anticipo a pagar es de $%.2f", anticipo);
		printf("\nLa cantidad de cuotas a pagar son 120");
		printf("\nEl monto de cada cuota a pagar sera de $%.2f",plazopago);
	} 	
	
		else{
		printf("\nEl ingreso familiar es menor a lo esperado, no se otorgara el credito hipotecario");
	}

	
}