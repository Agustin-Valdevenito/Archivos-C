#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int horas = 0; int costo = 0; int plus = 0 ;

main(){
	
	printf("\nIngrese la cantidad de horas trabajadas de un empleado = ");
	scanf("%d",&horas);
	
	if(horas<=180){
		costo = 560 * horas;
		printf("\nEl sueldo que cobrara el empleado es de %d pesos",costo);
		
	}	else	{
		plus = (horas - 180)*200;
		costo = (560 * 180) + plus;
		printf("El sueldo que cobrara el empleado es de %d pesos",costo );
	}
}