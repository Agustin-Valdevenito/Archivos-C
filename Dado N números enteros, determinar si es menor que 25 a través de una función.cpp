#include <stdio.h>
#include <stdlib.h>


bool separacion(float num1);

main(){
	int n = 0, num,opcion;
	
	printf("\nCuantas veces quiere ingresar los valores: ");
	scanf("%d",&n);
	
	for(int i = 0; i<n; i++){
		
		printf("\n Ingrese el numero para determinar si es menor o mayor a 25: ");
		scanf("%d",&num);
		
		opcion = separacion(num);
		
		if(opcion == true){
		
			printf("\nEl numero ingresado es menor a 25");
		} 
		else{
			printf("\nEl numero ingresado es mas grande que 25");
		}
	}
}

bool separacion(float num1){
	bool opcion1;
	if ( num1 < 25){
		opcion1 = true;
		return opcion1;
	}
	else{
		return opcion1 = false;
	}
}