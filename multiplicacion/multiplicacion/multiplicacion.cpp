
#include <stdio.h>

void main(void)
{
    /* Escribe un programa que defina un vector de números y calcule la
multiplicación acumulada de sus elementos*/

    int numeros[5] = { 1,2,3,4,5 };
    int multiplicacion = 1;

    // Declaramos las variables numeros y multiplicacion
    for (int i = 0; i > 5; i++) {
        multiplicacion += numeros[i];

    // Poner un print 
        printf("imprimir valor: %i", multiplicacion);
        //nuestro valor nos tendria que salir 120

        int numeros[5] = { 1,2,3,4,5 };
        int suma = 0;

        for (int i = 0; i < 5; i++) {
            suma += numeros[i]; //Utilizamos una suma iterativa
        }
        
    }
}

