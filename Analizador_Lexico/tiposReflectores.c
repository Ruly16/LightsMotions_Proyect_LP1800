#include <stdio.h>
#include <stdlib.h>
#include<string.h>
// prototipos de funciones

void  verificar ( );
// variables globales
int limRef=4;
int tiposReflectores[ ]={1,2,3,4};

int main()
{
    int  b[]={1,2,3,4 };
    verificar();
    return 0;
}
// funcion para verificar  el tipo de reflectores
void verificar(int a[])
{
    int opcion ="";
    int tipoSeleccionado ="";
        for(int i=0; i<limRef;i++){
            printf("ingrese el tipo de reflector:");
            scanf ("%i",&opcion);

        if(tiposReflectores[i] == opcion ){
                tipoSeleccionado=tiposReflectores[i];
                printf("el tipo de reflector seleccionado es:",tipoSeleccionado);


        };

    };

}
