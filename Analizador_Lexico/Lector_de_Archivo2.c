#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void lector2();


 // Funcion main
int main(){
	
	lector2();	

  return 0;
}

void lector2(){
	
	FILE * flujo = fopen ("Programa.txt","rb");
	if (flujo == NULL){
		perror ("Error al Abrir el Archivo");
		return 1;
	}
	
	fseek (flujo, 0, SEEK_END);
	int num_elementos = ftell(flujo);
	rewind (flujo);
	
	char * cadena = (char *) calloc(sizeof(char), num_elementos);
	if (cadena == NULL){
		perror ("Error en reserva de Memoria");
		return 2;
	} 
	
	int num_elementos_leidos = fread(cadena, sizeof(char), num_elementos, flujo);
	if (num_elementos_leidos != num_elementos){
		perror ("Error de lectura de archivo");
		return 3;
	}
	
	printf("%s\n", cadena);
	
	free(cadena);
	fclose(flujo);
	printf("\n\n Se a leido correctamente el archivo");


}
