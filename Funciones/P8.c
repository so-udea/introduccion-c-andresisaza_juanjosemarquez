#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanzarMoneda();

int main(int argc, char *argv[])
{
    srand(time(NULL));
    char resultado[100];
    char simbolos[] = {'C', 'S'};
    int cantLanzamientos, lado;
    printf("Lanzamiento de moneda\n\n");
    int cantCaras = 0;
    int cantSellos = 0;
    printf("¿Cuántas veces desea lanzar la moneda?: ");
    scanf("%d", &cantLanzamientos);
    printf("Resultado: ");
    for (int i = 0; i < cantLanzamientos; i++)
    {
        lado = lanzarMoneda();
        if (lado == 1)
        {
            cantSellos++;
        }
        else
        {
            cantCaras++;
        }
        printf("%c", simbolos[lado]);
    }
    sprintf(resultado, ", # de caras= %d, # de sellos= %d", cantCaras, cantSellos);
    printf("%s\n", resultado);
    return 0;
}

int lanzarMoneda()
{
    return rand() % 2;
}