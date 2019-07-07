/*
    Escriba un programa en C para encontrar la suma de las series:
    1 - x^2/2! + x^4/4! - ...
 */

#include <stdio.h>
#include <math.h>

int fac(int n) {
    if (n == 0)
    {
        return 1;
    }
    
    return fac(n-1)*n;
}

float geomProg(int x, int n){
    float ans = 0;

    for (int i = 0; i < n; i++)
    {
        int aux = 2*i;
        int sign = i%2 == 0 ? 1 : -1;
        ans += (powf(x, aux) * sign) / fac(aux);
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

    printf("La suma de la serie es: %f", geomProg(x, n));

    scanf("%d", &n);//comando para evitar que la consola se cierre.
}