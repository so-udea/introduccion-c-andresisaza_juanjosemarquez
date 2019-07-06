//Escriba un programa en C para desplegar la tabla de multiplicación desde 1 hasta N.

#include <stdio.h>

int main() {
    int n;
    printf("Ingrese N: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == n)
            {
                printf("%dx%d = %d.\n", j, i, j*i);
            } else
            {
                printf("%dx%d = %d, ", j, i, j*i);
            }
        }
        
    }
    scanf("%d", &n);//comando para evitar que la consola se cierre.
}