#include <stdio.h>
#include <stdlib.h>


main(){
	int c = 0, p, fem = 0, masc = 0, edad, aux = 0, enfermedad, condi = 0, gripestacional, pac = 1;
	
	printf("\nIngrese la cantidad de pacientes a ingresar = ");
	scanf("%d",&p);
	
	while(c < p){
		
		printf("\nIngrese el sexo del paciente numero %d",pac);
		printf(" teniendo en cuenta de que si es \nMasculino ingrese 1 \nFemenino  ingrese 2 \nIngrese su respuesta = ");
	 	scanf("%d",&aux);
		 
		printf("\nIngrese la edad del paciente numero %d = ",pac);
		scanf("%d",&edad);
		
	 	printf("\nIngrese la patologia que tiene el paciente numero %d",pac);
	 	printf("\nIngrese 0 para Gripe Estacional \nIngrese 1 para Gripe A \nIngrese 2 para Neumonia \nIngrese 3 para Bronquitis  \nIngrese su respuesta = ");
	 	scanf("%d",&enfermedad);
	 	
	 	if (enfermedad>= 0 && enfermedad <=3) {
             	printf("\nSe ingresaron correctamente los datos\n");
        } else {
            printf("Respuesta invalida, intente nuevamente.\n");
            continue;  
        }
        
	 	printf("\n----------------------------------------------------------------------");
	 	
	 	if(edad>58 && enfermedad==3 || enfermedad ==1){
	 		condi++;	
		 }
		
		if (aux == 1 && enfermedad == 0) {
            masc++;
        } else if (aux == 2 && enfermedad == 0) {
            fem++;
    	}
    	
		c++;
	 	pac++;
		}
		
	
	printf("\nLa cantidad de paciente mayores a 58 anos, que padecen Bronquitis o Gripe A fueron = %d ",condi);
	printf("\nLa cantidad de pacientes que padecen gripe estacional son \n%d pacientes masculinos \n%d pacientes femeninos", masc, fem);
	
}