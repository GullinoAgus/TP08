
/* 
 * File:   main.c
 * Author: Grupo 1
 *
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Codigo con error del Ejercicio 1 del TP08 
 */
int main(int argc, char** argv) {

    char a = 'h';
    void *p;
    p = &a;
    printf("a: %c\n", *p);
    return (EXIT_SUCCESS);
}

