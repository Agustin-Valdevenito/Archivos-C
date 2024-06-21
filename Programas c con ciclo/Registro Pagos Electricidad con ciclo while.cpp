#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	int n, c = 0,  nusuario, per-abona, cons-abon, mont-abon;
	
	printf("\nIngrese la cantidad de usuarios que pagaron el servicio electrico");
 	scanf("%d",&n);
 	
 	while(c<n){
 	
	printf("\nIngrese el numero de usuario");
 	scanf("%d",&nusuario);
 	
 	printf("\nIngrese el periodo que se abona");
 	scanf("%d",&per-abona);
 	
 	printf("\nIngrese el consumo realizado en el periodo anteriormente ingresado ");
 	scanf("%d",&cons-abon);
 	
 	printf("\nIngrese el monto abonado");
 	scanf("%d",&mont-abon);
 	
 	c++;
	 }
}