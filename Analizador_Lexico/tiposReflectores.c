#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// prototipos de funciones

bool  verificar ();
// variables globales
int limRef=4;
int tiposReflectores[ ]={1,2,3,4 };

int main()
{
    
   int b [ ] = {1, 2, 3, 4};
   verificar();
    return 0;
}
// funcion para verificar  el tipo de reflectores
bool verificar( int a [])
{
   int opcion;
    int tipoSeleccionado;
    int i;
    
      printf("\n---------- Tipos de Reflectores---------- ");
    printf("\n 1. Un solo color ");
    printf("\n 2. Dos colores ");
    printf("\n 3. Cuatro Colores ");
    
    printf("\nIngrese el tipo de reflector: ");
     scanf("%i", &opcion);
     
    	switch(opcion){
	    	case 1:
	    	        printf("\n Reflector seleccionado es de Un Solo color "); 
	    		break;
	    	case 2:
	    		    printf("\n Reflector seleccionado es de Dos Colores");
			    break;
			case 3:			    
	    	        printf("\n Refletor seleccionado es de Cuatro Colores");
			    break;					
			default:
				printf("\nLa opcion que escogio es invalida "); 
				
		} 
 


        };




