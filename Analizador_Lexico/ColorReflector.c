#include<stdio.h>
#include<string.h>

#define clr 4

int main(){
	
	ClrReflector();
	
	return 0;
}
 //funcion para seleccionar el color del reflector
void ClrReflector(){
	char *colores[clr]={
	"amarillo",
	"azul",
	"rojo",
	"verde"
	};
	
	char *temp;
	int i, j;

	
// muestra de los colores 
	for( i=0; i<clr-1; i++ )
		for( j=i+1; j<clr; j++ )
			if ( strcmp(colores[i], colores[j]) > 0 ) {
				temp = colores[i];
				colores[i] = colores[j];
				colores[j] = temp;
			}
	//impresion

	printf( "Lista de Colores disponibles en los Reflectores:\n" );
	for( i=0; i<clr; i++ )
		printf( "  %s.\n", colores[i] );
	
}
