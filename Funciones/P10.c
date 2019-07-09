#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getNumAleatorio(int n);
int multiplicar(int n, int m);

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int bandera = 1;
    int factor1, factor2, producto, respuestaUsuario, solucionCorrecta;
    while (bandera == 1)
    {
        factor1 = getNumAleatorio(10);
        factor2 = getNumAleatorio(10);
        producto = factor1 * factor2;
        respuestaUsuario = multiplicar(factor1, factor2);
        solucionCorrecta = 0;

        while (solucionCorrecta == 0)
        {
            if (producto == respuestaUsuario)
            {
                switch (getNumAleatorio(4))
                {
                case 0:
                    printf("Muy bien!\n");
                    break;
                case 1:
                    printf("Excelente!\n");
                    break;
                case 2:
                    printf("Buen trabajo!\n");
                    break;
                case 3:
                    printf("Sigue haciéndolo bien!\n");
                    break;
                }
                solucionCorrecta = 1;
            }
            else
            {
                switch (getNumAleatorio(4))
                {
                case 0:
                    printf("No. Por favor trata de nuevo.\n");
                    break;
                case 1:
                    printf("Incorrecto. Trata una vez más.\n");
                    break;
                case 2:
                    printf("No te rindas!\n");
                    break;
                case 3:
                    printf("No. Trata de nuevo.\n");
                    break;
                }
                respuestaUsuario = multiplicar(factor1, factor2);
            }
        }

        printf("¿Desea continuar? (1=SI  0=NO): ");
        scanf("%d", &bandera);
        printf("\n");
    }
    return 0;
}

int getNumAleatorio(int n)
{
    return rand() % n;
}

int multiplicar(int n, int m)
{
    int producto;
    printf("¿Cuánto es %d veces %d?: ", n, m);
    scanf("%d", &producto);
    printf("\n");
    return producto;
}