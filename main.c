
#include <stdio.h>
#include "clasificar.h"

#define ENTRADAS_MAX 30  //Tamaño maximo de strings por vector que se pueden ingresar

// La funcion recibe tres vectores clave, valor, param, un vector de strings y la cantidad de strings. Debe clasificar la entrada segun sea opcion
// o parametro y devolver el los tres vectores los punteros al inicio de cada uno.
void clasificarEntrada(char *clave[], char *valor[], char *param[], int vSize, char **entrada);

int main(int args, char **argv){

    char *clave[ENTRADAS_MAX] = {NULL};                 //Declaramos e inicializamos los vector con punteros nulos
    char *valor[ENTRADAS_MAX] = {NULL};
    char *param[ENTRADAS_MAX] = {NULL};
    int i = 0;
 
    clasificarEntrada(clave, valor, param, args, argv); //Separamos las opciones de los parametros  

    
    //Imprimimos la salida deseada
    while(clave[i] != NULL){  
        printf("Opcion %d: Clave: %s Valor: %s\n", i+1, clave[i], valor[i]);
        i++;
    }

    i = 0;
    while(param[i] != NULL){
        printf("Parametro %d: %s\n", i+1, param[i]);
        i++;
    }

    return 0;
}
