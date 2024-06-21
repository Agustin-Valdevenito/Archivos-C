#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int n, precio, c = 0;
main(){
	printf("\nIngrese la cantidad de facturas a calcular = ");
	scanf("%d",&n);
	
	while(c<n){
		printf("\nIngrese el valor de la factura = ");
		scanf("%d",&precio);
		
		if(2500<precio){
			printf("Se debera pagar la factura con un cheque\n");
		}else{
			printf("Se debera pagar la factura con efectivo\n");
		}
		c++;
	}
}