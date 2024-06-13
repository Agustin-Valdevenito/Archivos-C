#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int nota1; int nota2; int nota3; int c=0;

main(){
 	
	printf("\nIngrese las 3 notas del alumno perteneciente al Instituto Educativo");
 	
	printf("\nIngrese la primer nota = ");
	scanf("%d",&nota1);

 	printf("\nIngrese la segunda nota = "); 	
 	scanf("%d",&nota2);

 	printf("\nIngrese la tercer nota = ");	
 	scanf("%d",&nota3);	
 
 	if(nota1>nota2 && nota1>nota3){
 		printf("\nLa nota mayor es %d",nota1);
		} 
		
	if(nota2>nota1 && nota2>nota3){
 		printf("\nLa nota mayor es %d",nota2);
		} 
		
	if(nota3>nota2 && nota3>nota1){
 		printf("\nLa nota mayor es %d",nota3);
		} 		
}