#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


bool condicion(int a1, int b1, bool &opcion1, int num);
main(){
	
	int n, a, b, num;
	bool opcion;
		
		
		printf("\n Ingrese el valor del inicio del intervalo A: ");
		scanf("%d",&a);
		
		printf("\n Ingrese el valor del inicio del intervalo B: ");
		scanf("%d",&b);
		
		printf("\n El intervalo ingresado es [ %d , %d ]", a, b); 
		
		printf("\n Ingrese la cantidad de veces que quiere repetir el proceso: ");
		scanf("%d",&n);
	
	for(int i = 0; i<n; i++){
		
		printf("\n Ingrese el num %d para analizar si pertenece al intervalo: ",i+1);
		scanf("%d",&num);
		
		opcion = condicion(a,b,opcion,num);
		if( opcion == true){
			
			printf("\n El numero esta dentro del intervalo");
		}
		else{
			printf("\n El numero esta fuera del intervalo");
		}
	}
}

bool condicion(int a1, int b1, bool &opcion, int num1){
	
	if( num1>=a1 && num1<=b1){
		
		return opcion = true;
	}
	else{
		
		return opcion = false;
	}
}