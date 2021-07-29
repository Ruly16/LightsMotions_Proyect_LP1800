#include<stdio.h>
#include<string.h>
//definicion del tamaño del arreglo
#define clr 4

int main(){
	
	ClrReflector();
	
	return 0;
}

//funcion de seleccion del color de reflectores
void ClrReflector(){
	char *colores[clr]={
	"amarillo",
	"azul",
	"rojo",
	"verde"
	};
	
	char *temp;
	int i, j, id;
	

	

	for( i=0; i<clr-1; i++ )
		for( j=i+1; j<clr; j++ )
			if ( strcmp(colores[i], colores[j]) > 0 ) {
				temp = colores[i];
				colores[i] = colores[j];
				colores[j] = temp;
		}
	
	//impresion de la lista de colores con id

	printf( "Lista de Colores disponibles en los Reflectores:\n" );
	for( i=0; i<clr; i++ )
		printf( "%i. %s\n ",i+1,colores[i] );
	
	
	//seleccion de colores
		
		printf( "seleccionar el id numerico del color \n" );
		printf("\nId: ");
		scanf("%i",&id);
		
		
		switch(id){
	    	case 1:
	    	        printf("\n Color seleccionado es el amarillo "); 
	    		break;
	    	case 2:
	    		    printf("\n Color seleccionado es el azul");
			    break;
			case 3:			    
	    	        printf("\n Color seleccionado es el rojo");
			    break;
			case 4:			    
	    	        printf("\n Color seleccionado es el verde");
			    break;		
			default:
				printf("\nLa opcion que escogio es invalida "); 
				
		}
	   
		

}
