#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void decisiondecobro(int horas1, float &cobro1, int horasextras1);
main(){
	
	int n, horas, horasextras;
	float cobro;
	
	printf("\nIngrese la cantidad de empleados que desea ingresar:");
	scanf("%d",&n);
	
	for(int i = 0; i<n; i++){
		
		printf("\nIngrese la cantidad de horas trabajadas del empleado n%d durante el mes: ",i+1);
		scanf("%d",&horas);
		
		decisiondecobro(horas,cobro,horasextras);
		
		printf("\n El cobro del empleado n%d, es de $%.1f \n",i+1,cobro);
	}
}

void decisiondecobro(int horas1, float &cobro1, int horasextras1 ){
	
	if(horas1 == 180 or horas1 <= 180){
		
		cobro1 = horas1 * 560;
		


	}
	else {
		
		horasextras1 = horas1 - 180;

		cobro1 = (horasextras1 * 200)+(180 * 560);
		
		
	}
}