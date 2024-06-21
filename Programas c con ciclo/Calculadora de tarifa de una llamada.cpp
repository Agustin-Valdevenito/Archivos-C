#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int x, costo, c = 0, n;

main(){
	
	printf("\nIngrese la cantidad de llamadas a hacer = ");
	scanf("%d",&n);
	
	while(c<n){
		printf("\nIngrese la duracion de la llamada = ");
		scanf("%d",&x);
	
		if(x>3){
			x= (x - 3) * 65;
			costo = 3*120;
			x = x + costo;
			printf("El costo de la llamada es de %d\n",x);
		
			}	else	{
				costo = 3*120;
				printf("El costo de la llamada fue = %d\n", costo);
			}
		 c++;
	}
}