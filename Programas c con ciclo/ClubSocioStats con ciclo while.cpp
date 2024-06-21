#include <stdio.h>
#include <stdlib.h>


main(){
	int c = 0, s, fem = 0, masc = 0, mayorfut = 0,menores = 0, edad, aux = 0, deporte, numsoc=1;
	
	printf("\nIngrese la cantidad de socios a ingresar = ");
	scanf("%d",&s);
	
	while(c<s){
		
		printf("\nIngrese el sexo del socio numero %d",numsoc);
		printf(" teniendo en cuenta de que si es \nMasculino ingrese 1 \nFemenino  ingrese 2 \nIngrese su respuesta = ");
	 	scanf("%d",&aux);
 		
		if (aux == 1) {
            masc++;
        } else if (aux == 2) {
            fem++;
        } else {
            printf("Respuesta invalida, intente nuevamente.\n");
            continue;  
        }
		 
		printf("\nIngrese la edad del socio numero %d = ",numsoc);
		scanf("%d",&edad);
		
	 	printf("\nIngrese el deporte que realiza el socio numero %d",numsoc);
	 	printf("\nIngrese 1 para futbol \nIngrese 2 para natacion \nIngrese 3 para jockey \nIngrese su respuesta = ");
	 	scanf("%d",&deporte);
	 	
	 	printf("\n----------------------------------------------------------------------");
	 	
	
	 	
	 	if( deporte=1 && 30<=edad && 50>=edad){
	 		mayorfut++;
		 }

	 	if(edad>16){
	 		menores++;
		}
		
	 	c++;
	 	numsoc++;

	}
	
	printf("\nLa cantidad de socios que tienen entre 30 y 50 anos, y practican futbol son = %d ", mayorfut);
	printf("\nEl club tiene actualmente \n%d socios masculinos \n%d socios femeninos", masc, fem);
	printf("\nEl club tiene %d socios menores",menores);
}