#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool estado_reflectores();
bool estado_fuentes();
 

 // Funcion main
int main(){
	
	estado_reflectores();
	estado_fuentes();
	

  return 0;
}


// Funcion del manejo del encendido y apagado de los reflectores
// Aun se puede mejorar especificando la cantidad de reflectores a encender y cuales desea encender
bool estado_reflectores(){
	int estado_r;
	float lm; // Lumenes 

	printf("\n");

	printf("\nBIENVENIDOS AL CONTROL DE REFLECTORES");

	printf("\n");

	printf("\nDesea Encender el Reflector");
	printf("\nSI: Ingrese 1");
	printf("\nNo: Ingrese 0");
	
	printf("\n");

	printf("\nIngrese Opcion: ");
	scanf ("%i",&estado_r);



	if (estado_r ==1)
	{
		printf("\nEl Reflector esta encendido");
		printf("\n");
		printf("\nIngrese la Intensidad del Reflector");
		printf("\nIngrese Opcion: ");
  		scanf ("%f",&lm);
	}
	else if (estado_r!=1)
		{
			printf("\nEl Reflector esta apagado");
		}

	return false;
}

// Funcion del manejo del encendido y apagado de los fuentes
// Aun se puede mejorar especificando la cantidad de fuentes a encender y cuales desea encender
bool estado_fuentes(){
	int estado_f;
	float PSI; // Intensidad

	printf("\n");

	printf("\nBIENVENIDOS AL CONTROL DE LAS FUENTES");

	printf("\n");

	printf("\nDesea Encender la Fuente");
	printf("\nSI: Ingrese 1");
	printf("\nNo: Ingrese 0");
	
	printf("\n");

	printf("\nIngrese Opcion: ");
	scanf ("%i",&estado_f);



	if (estado_f==1)
	{
		printf("\nLa Fuente esta encendida");
		printf("\n");
		printf("\nIngrese la Intensidad de la Fuente");
		printf("\nIngrese Opcion: ");
  		scanf ("%f",&PSI);
	}
	else if (estado_f!=1)
		{
			printf("\nLa Fuente esta apagada");
		}

	return false;
}
