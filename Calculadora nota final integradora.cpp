#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float nota1, nota2, nota3, nota4, nota5 , notafinal;

main(){
	
	printf("\nIngrese la primer nota de la primera asignatura = ");
	scanf("%f",&nota1);
	
	printf("\nIngrese la segunda nota de la primer asignatura = ");
	scanf("%f",&nota2);
	
	printf("\nIngrese la primer nota de la segunda asignatura = ");
	scanf("%f",&nota3);
	
	printf("\nIngrese la segunda nota de la segunda asignatura = ");
	scanf("%f",&nota4);
	
	printf("\nIngrese la nota del trabajo final integrador = ");
	scanf("%f",&nota5);
	
	notafinal = (((nota1 + nota2) * 20)/100)+(((nota3 + nota4) * 30)/100)+((nota5 * 50 )/100);
	printf("\nLa nota de trabajo final integrador del alumno sera de %.2f",notafinal);

}