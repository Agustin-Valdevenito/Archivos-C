#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	float c = 0, num, n, s = 0, p;
	
	printf("Ingrese la cantidad de numeros que usara = ");
	scanf("%f",&n);
	
	while (c<n) { 
		printf("\nIngrese el valor = ");
		scanf("%f",&num);
		
		s = s + num;
		p = s / (c+1);
		c++;

	}
		printf("\nLa suma de todos los numueros ingresados es = %g",s);
		printf("\nEl promedio de todos los numeros ingresados es = %.2f",p);
	
}