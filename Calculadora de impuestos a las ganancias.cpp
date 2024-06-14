#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int ing , monto;

main(){
	
	printf("\nIngrese el monto que cobrabra el trabajador = $");
	scanf("%d",&ing);
	
	if(ing<=50000){
		printf("\nEl trabajador no pagara impuestos");
	}
	
	if(ing>50000 && ing<=80000){
		monto = (ing * 1.5)/100;
		printf("\nEl monto de impuestos que pagara el trabajador es de $%d",monto);
		
	}
	if(ing>80000){
		monto = (ing * 2)/100;
		printf("\nEl monto de impuestos que pagara el trabajador es de $%d",monto);
	}	
}