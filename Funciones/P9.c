#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getNumAleatorio();
int multiplicar(int n, int m);

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int factor1, factor2, producto, respuestaUsuario, solucionCorrecta;
    int bandera = 1;
    while (bandera == 1)
    {
        factor1 = getNumAleatorio();
        factor2 = getNumAleatorio();
        producto = factor1 * factor2;
        respuestaUsuario = multiplicar(factor1, factor2);
        solucionCorrecta = 0;
        while (solucionCorrecta == 0)
        {
            if (producto == respuestaUsuario)
            {
                printf("Muy bien!\n");
                solucionCorrecta = 1;
            }
            else
            {
                printf("No. Por favor intenta nuevamente\n");
                respuestaUsuario = multiplicar(factor1, factor2);
            }
        }
        printf("¿Desea continuar? (1=SI  0=NO): ");
        scanf("%d", &bandera);
        printf("\n");
    }
    return 0;
}

int getNumAleatorio()
{
    return rand() % 10;
}

int multiplicar(int n, int m)
{
    int producto;
    printf("¿Cuánto es %d veces %d?: ", n, m);
    scanf("%d", &producto);
    printf("\n");
    return producto;
}