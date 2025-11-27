#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


bool decision(int monto1, bool opcion1);
main(){
	
	int n, monto;
	bool opcion;
	
	printf("\n Ingrese la cantidad de facturas de compra que quiere ingresar: ");
	scanf("%d",&n);
	
	for(int i = 0; i<n; i++){
		
		printf("\n Ingrese el importe de la factura n%d: ",i+1);
		scanf("%d",&monto);
		
		opcion = decision(monto,opcion);
		
		if( opcion == true ){
			printf("\nSe debe pagar con cheque");
		}
		else{
			printf("\nSe debe pagar con efectivo");
		}
	}
}

bool decision (int monto1, bool opcion1){
		
		if (monto1 < 2500){
			
			
			return opcion1 = false;
		}
		else {
			return opcion1 = true;
		}
}
