
#include <stdio.h>

void main(void)
{
    /* Escribe un programa que defina un vector de n�meros y calcule la
multiplicaci�n acumulada de sus elementos*/

    int numeros[5] = { 1,2,3,4,5 };
    int multiplicacion = 1;

    // Declaramos las variables numeros y multiplicacion
    for (int i = 0; i > 5; i++) {
        multiplicacion += numeros[i];
        
    }
}

