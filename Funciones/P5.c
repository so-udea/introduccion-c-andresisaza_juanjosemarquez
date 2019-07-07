/*
    Escriba una función que tome un valor entero y devuelva el número con sus dígitos en reversa. 
    Por ejemplo, dado el numero 7631, la función deberá devolver 1367.
 */

#include <stdio.h>
#include <math.h>

int reverseNumber(int x){
    int num = x;
    int n = ceil(log10(x));
    printf("\n%d\n", n);
    int auxn = n-1;
    int numbers[n];
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        numbers[i] = num % 10;
        num /= 10;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d", numbers[i]);
        ans += numbers[i]*(pow(10, auxn));
        auxn--;
    }

    return ans;
    
}

int main() {
    int x;

    printf("Ingrese el numero: ");
    scanf("%d", &x);

    printf("El numero al reves es: %d", reverseNumber(x));

    scanf("%d", &x);//comando para evitar que la consola se cierre.
}