#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	
	float n, s = 0, p = 0 , c = 1, fin = 0;

	while(fin<1){
	
 	printf("\nIngrese el valor de la nota final del alumno numero %g = ", c);
 	scanf("%f",&n);	
	
	if(n<1){
		fin++;
	}

	s = s+n;
	p = s/(c-1);
	c++;
	}
	printf("\nLa suma de las notas total es %.2f",s);
	printf("\nEl promedio final de las notas es %.2f",p);
}	