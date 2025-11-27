#include <stdio.h>
#include <stdlib.h>

void perimetros(float radio1, float &per1);
void areas(float radio1,float &area1);
main(){
	
	int n;
	float radio, per, area;
	
	printf("\n Ingrese la cantidad de radios a ingresar: ");
	scanf("%d",&n);
	
	for(int i = 0 ; i < n;i++){
		printf("\n Ingrese el valor del radio n%d: ",i+1);
		scanf("%f",&radio);
		
		perimetros(radio,per);
		areas(radio,area);
		
		printf("\nEl perimetro del circulo n%d es: %.2f ",i+1, per);
		printf("\nEl area del circulo n%d es: %.2f ",i+1,area);
}
}

void perimetros(float radio1, float &per1 ){
	
	per1 = radio1 * 2 * 3.14;
}

void areas(float radio1, float &area1 ){
	 
	 area1 = 3.14 * radio1 * radio1;
}