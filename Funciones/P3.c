/*
    Escriba un programa en C para encontrar la suma de las series:
    1 - x^2/2! + x^4/4! - ...
 */

#include <stdio.h>
#include <math.h>

/**
 * Función que retorna el factorial de un número entero.
 */
int fac(int n) {
    if (n == 0)
    {
        return 1;
    }
    
    return fac(n-1)*n;
}

/**
 * Función que recibe dos números enteros (x y n) y retorna la suma de la serie 1 - x^2/2! + x^4/4! - ...
 */
float sumSer(int x, int n){
    float ans = 0;

    for (int i = 0; i < n; i++)
    {
        int aux = 2*i;//En cada término se usan números pares.
        int sign = i%2 == 0 ? 1 : -1; //determina el sigo del término que se está evaluando.
        ans += (powf(x, aux) * sign) / fac(aux); //Realiza la operación y la agrega a la respuesta.
    }

    return ans;
}

int main() {
    int x;
    int n;

    printf("Valor de entrada de x: ");
    scanf("%d", &x);
    
    printf("Numero de terminos: ");
    scanf("%d", &n);

    printf("La suma de la serie es: %f", sumSer(x, n));

    scanf("%d", &n);//comando para evitar que la consola se cierre.
}