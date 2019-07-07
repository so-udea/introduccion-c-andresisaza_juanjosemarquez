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

    int pairNumber=0; //número de la pareja que está ingresando
    for (int i = 0 ; i < (2*n); ++i) {
        if (i%2 == 0)
        {
            pairNumber++;//Aumenta en cada nueva pareja
            printf("\nPrimer número, par #%d: ", pairNumber);
            scanf("%d", &firstNumbers[pairNumber-1]);//se guarda el número en la posición de la pareja. Se resta 1 para que sea la posición.
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
        multiplo(firstNumbers[i], secondNumbers[i]);
    }
    
    scanf("%d", &n);//comando para evitar que la consola se cierre.
}