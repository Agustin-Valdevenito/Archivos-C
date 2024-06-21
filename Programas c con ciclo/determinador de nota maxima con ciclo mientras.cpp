#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int nota1, nota2, nota3, c=0 , n , alum = 1;

main(){
	printf("\nIngrese la cantidad de alumnos a los que se le tomaron las notas = ");
	scanf("%d",&n);
 
 	while(c<n){
 
	 
	printf("\nIngrese las 3 notas del alumno %d perteneciente al Instituto Educativo\n", alum);
 	
	printf("Ingrese la primer nota = ");
	scanf("%d",&nota1);

 	printf("Ingrese la segunda nota = "); 	
 	scanf("%d",&nota2);

 	printf("Ingrese la tercer nota = ");	
 	scanf("%d",&nota3);	
 
 	if(nota1>nota2 && nota1>nota3){
 		printf("\nLa nota mayor es %d\n",nota1);
		} 
		
	else if(nota2>nota1 && nota2>nota3){
 		printf("\nLa nota mayor es %d\n",nota2);
		} 
		
	else if(nota3>nota2 && nota3>nota1){
 		printf("\nLa nota mayor es %d\n",nota3);
		}		
			c++;
			alum++;
		
	}	
}