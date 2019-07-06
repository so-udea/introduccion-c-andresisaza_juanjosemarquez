/*Escriba un programa en C para imprimir la siguiente secuencia (dado el numero de renglones):
1
01
101
0101
10101*/

#include <stdio.h>

int main() {
    int n;
    printf("Ingrese el número de renglones: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int number = (i + j) % 2;//fórmula para definir si en la posición debe ir 1 o 0.
            printf("%d", number);
        }
        printf("\n");
    }
    scanf("%d", &n);//comando para evitar que la consola se cierre.
}