#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int salariobasic; int fam=12500; int ant; int total; int jub; int segvida = 1500;

main(){
	
	printf("\nIngrese el salario basico de un empleado = $");
	scanf("%d",&salariobasic);
		
	ant = (salariobasic * 10)/100;
	printf("\nEl monto adicional por antiguedad sera de $%d", ant);
	printf("\nEl monto adicional por salario familiar sera de $%d", fam);
	
	jub = (salariobasic*14)/100;
	printf("\nEl monto descontado por jubilacion sera de $%d",jub);
	printf("\nEl monto descontado por seguro de vida sera de $%d",segvida);
	
	total = salariobasic + ant + fam - jub - segvida;
	printf("\nEl monto a cobrar sera de $%d",total);
}