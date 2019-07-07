/*
    Escriba una función que tome un valor entero y devuelva el número con sus dígitos en reversa. 
    Por ejemplo, dado el numero 7631, la función deberá devolver 1367.
 */

#include <stdio.h>
#include <math.h>

/**
 * Función que toma un valor entero y devuelva el número con sus dígitos en reversa.
 */
int reverseNumber(int x){
    int num = x;
    int n = ceil(log10(x));//Función techo del logaritmo del número para saber cuántos dígitos tiene.
    int numbers[n];
    int ans = 0;

    for (int i = 0; i < n; i++) //Se guardan los digítos en el vector de forma inversa.
    {
        numbers[i] = num % 10;//Se guarda el último dígito en el vector.
        num /= 10;//Se elimina el último dígito de la variable que almacena una copia de x.
    }    
    
    for (int i = 0; i < n; i++)//Se vuelve a recrear el número, pero de forma invertida.
    {
        int aux = ans * 10;
        ans = aux + numbers[i];
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