#include<stdio.h>



int main(){
	
	TMatriz();   


  return 0;
}

//Función del tamaño del reflector
int TMatriz(){
	
  //tamaños disponibles
	 int tamano[] = {1,2,4};
    int i, opc;
    
	
	printf("Escoger dimension de reflector ");

	//lector del array
	   for(i=0; i<3; i++){
		printf("%i, " , tamano[i]);
	    } 
	printf("\nOpcion: ");    
	    scanf("%i",&opc);
  
  //condicional
	   switch(opc){
	    	case 1:
	    	        printf("\n reflector de dimension: %i" ,opc); 
	    		break;
	    	case 2:
	    			printf("\n reflector de dimension: %i" ,opc); 
			    break;
			case 4:
			    	printf("\n reflector de dimension: %i" ,opc); 
			    break;	
			default:
				printf("\nLa opcion que escogio es invalida "); 
				
		}
	   
}
