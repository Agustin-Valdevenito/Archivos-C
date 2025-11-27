# include <stdio.h>
# include <stdlib.h>
#include <conio.h>


void convertidor(float sg1, float &hs1, float &min1, float &segundos1);

main(){
	
	int n;
	float sg, hs,min, segundos;
	
	printf("\n Ingrese la cantidad de magnitudes que quiere convertir: ");
	scanf("%d",&n);
	
	for (int i = 0; i<n; i++){
		
		printf("\n Ingrese el cantidad n%d en segundos que desea convertir: ",i+1);
		scanf("%f",&sg);
		
		convertidor(sg,hs,min,segundos);
		
		printf("\n El valor ingresado fue %.1f y su conversion en la siguiente \n Horas = %.1f \n minutos = %.1f \n segundos = %.1f", sg,hs, min, segundos);
	}
}

void convertidor(float sg1, float &hs1, float &min1, float &segundos1){
		
		segundos1 = sg1;
		
		min1 = sg1/60;
		
		hs1  =  sg1 / 3600;	
	}