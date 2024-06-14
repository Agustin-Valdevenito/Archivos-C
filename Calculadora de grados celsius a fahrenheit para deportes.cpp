#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float temp; 

int main(){
	
	printf("\nIngrese la temperatura en grados celcius = ");
	scanf("%f",&temp);
	
	temp = (9/5) * (temp) + 32;
	
	if(temp>85){
	
	printf("\nEl deporte mas apropiado para hacer en %.2f fahrenheit es natacion", temp );	

	}
	else if(temp>35 && temp<=85){		
	
	printf("\nEl deporte mas apropiado para hacer en %.2f fahrenheit es tenis", temp );	

	}
	
	else if(temp>32 && temp<=35) {
	printf("\nEl deporte mas apropiado para hacer en %.2f fahrenheit es esqui", temp );	

	}
	
	else if(temp<=32) {
	printf("\nSe puede hacer cualquier otro deporte con  %.2f fahrenheit ", temp );	

	}
}
