/*
    Escribir un programa que lea dos números x y n y en una función, calcule la suma de la progresión geométrica:
    1 + x + x^2 + x^3 + x^4 + ⋯ + x^n
 */

#include <stdio.h>
#include <math.h>

/**
 * Función que calcula la suma de la progresión geométrica 1 + x + x^2 + x^3 + x^4 + ⋯ + x^n.
 */
float geomProg(int x, int n){
    float ans = 0;

    for (int i = 0; i <= n; i++)
    {
        ans += powf(x, i);
    }

    return ans;
    
}

int main() {
    int x;
    int n;

    printf("Ingrese x: ");
    scanf("%d", &x);
    
    printf("Ingrese n: ");
    scanf("%d", &n);

    printf("La suma de la progresion geometrica es: %f", geomProg(x, n));

    scanf("%d", &n);//comando para evitar que la consola se cierre.
}