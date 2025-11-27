#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float calculonota(	float notaprimer1, float notasegunda1, float notatercera1, float notacuarta1, float notatrabfinal1, float notafinal1);
main(){
	
	int n;
	float notaprimer, notasegunda, notatercera, notacuarta, notatrabfinal, notafinal;
	
	printf("\n Ingrese la cantidad de alumnos de los que desea conocer la nota final:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		
		printf("\nIngrese la primera nota de la primera asignatura del alumno n%d: ",i+1);
		scanf("%f",&notaprimer);
		printf("\nIngrese la segunda nota de la primera asignatura del alumno n%d: ",i+1);
		scanf("%f",&notasegunda);
		printf("\nIngrese la primera nota de la segunda asignatura del alumno n%d: ",i+1);
		scanf("%f",&notatercera);
		printf("\nIngrese la segunda nota de la segunda asignatura del alumno n%d: ",i+1);
		scanf("%f",&notacuarta);
		printf("\nIngrese la nota del trabajo final integrador del alumno n%d: ",i+1);
		scanf("%f",&notatrabfinal);
		
		notafinal = calculonota(notaprimer,notasegunda,notatercera,notacuarta,notatrabfinal,notafinal);
		printf("\nLa nota final del alumno n%d: %.2f ",i+1,notafinal);
	}
}

float calculonota(	float notaprimer1, float notasegunda1, float notatercera1, float notacuarta1, float notatrabfinal1, float notafinal1){
	
		return notafinal1 = ((((notaprimer1 + notasegunda1)*20)/100) + (((notatercera1 + notacuarta1)*30)/100) + ((notatrabfinal1 * 50)/100));
}