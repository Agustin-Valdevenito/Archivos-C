#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float sueldo = 0, ant; 

int main(){
	
	printf("\nIngrese el sueldo del empleado $");
	scanf("%f",&sueldo);
	
	printf("\nIngrese la antiguedad del empleado ");
	scanf("%f",&ant);
	
	
	if(ant<=5){
	
	sueldo = ((sueldo*10)/100);
	printf("\nLa bonificacion que recibira el empleado teniendo %g anos de antiguedad sera de $%2.f", ant, sueldo);	

	}
	else if(ant>5 && ant<=10){
		
			sueldo = ((sueldo*15)/100);
	printf("\nLa bonificacion que recibira el empleado teniendo %g anos de antiguedad sera de $%2.f", ant, sueldo);	
	}
	
	else {
			sueldo = ((sueldo*20)/100);
	printf("\nLa bonificacion que recibira el empleado teniendo %g anos de antiguedad sera de $%2.f", ant, sueldo);	
	}
}
