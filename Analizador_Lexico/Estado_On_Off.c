#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool estado_reflectores();

int main(){
	
	estado_reflectores();
	

  return 0;
}

bool estado_reflectores(){
	int estado;
	float lm; // Lumenes 

	printf("\n");

	printf("\nBIENVENIDOS");

	printf("\n");

	printf("\nDesea Encender el Reflector");
	printf("\nSI: Ingrese 1");
	printf("\nNo: Ingrese 0");
	
	printf("\n");

	printf("\nIngrese Opcion: ");
	scanf ("%i",&estado);



	if (estado==1)
	{
		printf("\nEl Reflector esta encendido");
		printf("\n");
		printf("\nIngrese la Intensidad del Reflector");
		printf("\nIngrese Opcion: ");
  		scanf ("%f",&lm);
	}
	else if (estado!=1)
		{
			printf("\nEl Reflector esta apagado");
		}

	return false;
}
