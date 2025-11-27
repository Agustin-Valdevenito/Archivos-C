#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void filtrado(int edad1, int deporte1, int sexo1, int &futbol1, int &masc, int &fem1, int &menor1);

main(){
	
	int n, edad, deporte, sexo, futbol = 0, masc = 0, fem = 0, menor = 0;
	printf("\nIngrese la cantidad de socios que quiere anadir: ");
	scanf("%d",&n);
	
	for(int i = 0; i<n; i++){
		
		printf("\nIngrese la edad del socio n%d: ",i+1);
		scanf("%d",&edad);
		
		printf("\nIngrese el deporte que realiza el socio n%d \n Ingrese 1 para elegir Futbol \n Ingrese 2 para elegir Natacion \n Ingrese 3 para Jockey \nIngrese una opcion: ",i+1);
		scanf("%d",&deporte);
		
		printf("\nIngrese el sexo del socio n%d \nIngrese 1 para masculino \nIngrese 2 para femenino \nIngrese una opcion: ",i+1);
		scanf("%d",&sexo);
		
		filtrado(edad,deporte,sexo,futbol,masc,fem,menor);
	}
		printf("\nLos socios con una edad entre los 30 y 50 anos que practican futbol son: %d \nEl club tiene %d socios femeninos y %d socios masculinos \nEl club tiene %d socios menores de 16 anos",futbol, fem,masc,menor);
}

void filtrado(int edad1, int deporte1, int sexo1, int &futbol1, int &masc1, int &fem1, int &menor1){
	
	if (edad1 < 16){
		menor1 = menor1 + 1;
	}
	
	if (deporte1 == 1 && edad1 <= 50 && edad1 >= 30){
		
		futbol1= futbol1 + 1;
	}
	if ( sexo1 == 1){
		
		masc1 = masc1 + 1;
	}
	else {
		fem1 = fem1 + 1;
	}
}
