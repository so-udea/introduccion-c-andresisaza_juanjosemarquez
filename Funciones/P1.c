/*
 Escriba una función llamada múltiplo que tome dos enteros y determine si el segundo es múltiplo del primero. 
 La función deberá tomar dos argumentos enteros y devolver 1 si el segundo es un múltiplo del primero y 0 si no. 
 Luego, utilice esta función en un programa que acepte como entrada una serie de pares de enteros.
 */

#include <stdio.h>

/**
 * La función toma dos argumentos enteros y devuelve 1 si el segundo es un múltiplo del primero y 0 si no.
 */
int multiplo(int a, int b){

    if (a % b == 0)
    {
        printf("El primer número (%d) sí es múltiplo del segundo número (%d).\n", a, b);
        return 1;
    }
    else
    {
        printf("El primer número (%d) no es múltiplo del segundo número (%d).\n", a, b);
        return 0;
    }
}

int main() {

    int n;
    printf("Ingrese el total de pares que quiere analizar: ");
    scanf("%d", &n);
    int firstNumbers[n];
    int secondNumbers[n];

    printf("\nIngrese los pares uno a uno.\n");

    int pairNumber=0;
    for (int i = 0 ; i < (2*n); ++i) {
        if (i%2 == 0)
        {
            pairNumber++;
            printf("\nPrimer número, par #%d: ", pairNumber);
            scanf("%d", &firstNumbers[pairNumber-1]);
        }
        else
        {
            printf("Segundo número, par #%d: ", pairNumber);
            scanf("%d", &secondNumbers[pairNumber-1]);
        }
        
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("\n%d\n", firstNumbers[i]);
        printf("\n%d\n", secondNumbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        multiplo(firstNumbers[i], secondNumbers[i]);
    }
    
        

    /* int firstN;
    int secondN;

    printf("Este programa analiza si el segundo número ingresado el múltiplo del primero.\n\n");
    printf("Ingrese el primer número: ");
    scanf("%d", &firstN);

    printf("Ingrese el segundo número: ");
    scanf("%d", &secondN);

    if (multiplo(firstN, secondN) == 1)
    {
        printf("El primer número sí es múltiplo del segundo número.");
    }
    else
    {
        printf("El primer número no es múltiplo del segundo número.");
    }*/
    
    scanf("%d", &n);//comando para evitar que la consola se cierre.
}