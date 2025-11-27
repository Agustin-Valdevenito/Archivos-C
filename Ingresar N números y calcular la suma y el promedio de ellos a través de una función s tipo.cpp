#include <stdio.h>
#include <stdlib.h>

void sumas(int num1, int &suma1);
void promedio(int suma1, int n1 ,float &prom1);

main(){
	int n, num, suma = 0;
	float prom;
	
	printf("\n Ingrese la cantidad de numeros que quiere calcular: ");
	scanf("%d",&n);
	
	for(int i = 0; i<n; i++){
		printf("\n Ingrese el valor n%d: ",i+1);
		scanf("%d",&num);
		
		sumas(num,suma);
				
	}
		promedio(suma,n,prom);
		
		printf("\n La suma de todos los numeros es: %d",suma);
		printf("\n El promedio es: %.1f",prom);
}

void sumas(int num1,int &suma1){
		
		suma1 = suma1 + num1;
		
		
}
void promedio(int suma1, int n1, float &prom1){
	
	prom1 = (float) suma1 / n1;
}