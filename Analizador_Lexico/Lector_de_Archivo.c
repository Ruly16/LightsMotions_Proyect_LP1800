#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void lector();


 // Funcion main
int main(){
	
	lector();	

  return 0;
}

void lector(){

	/*Función  que lee de un archivo*/
   printf("\n Bienvenidos al Lector\n");

    FILE* archivoLectura=NULL;
    char* nombrearchivo= "Programa.txt";
    char leer[100];

    archivoLectura = fopen(nombrearchivo, "r");
    if(archivoLectura==NULL) 
	return -1;

    fscanf(archivoLectura," %[^\n]",&leer);
    printf("Lectura: %s\n",leer);
    fscanf(archivoLectura," %[^\n]",&leer);
    printf("Lectura: %s\n",leer);
    fscanf(archivoLectura," %[^\n]",&leer);
    printf("Lectura: %s\n",leer);
    
    fclose(archivoLectura);

    return 0;
}

	
	

