#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int x = 0; int costo = 0;

main(){
	
	printf("\nIngrese la duracion de la llamada = ");
	scanf("%d",&x);
	
	if(x>3){
		x= (x - 3) * 65;
		costo = 3*120;
		x = x + costo;
		printf("\nEl costo de la llamada es de %d",x);
		
	}	else	{
		printf("El costo de la llamada fue = %d", costo);
	}
	
}