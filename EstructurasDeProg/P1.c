/*P1
El propietario de Harry’s Car Sales paga a cada vendedor una comisión basada en sus ventas trimestrales. 
Los rangos de ventas y las correspondientes tasas son mostrades en la tabla que aparece a continuación:
Ventas trimestrales ($)     Comisión
0 - 20000 --> Multiplicar las ventas por 5%

20001-50000 --> Multiplicar la ventas sobre 20000 por 7% y entonces agregue 1000 al resultado

50001 o mas --> Multiplicar la ventas sobre 50000 por 10% y entonces agregue 3100 al resultado

Teniendo en cuenta lo anterior lleve a cabo las siguientes tareas:

Comprenda el problema y realice casos de obteniendo las comisiones para los siguientes valores de ventas: 20000, 20001, 30000, 50000, 50001, 75000, y –3.
Codifique el algoritmo en C de modo que permita el calculo de las comisiones. Lleve a cabo las pruebas con los casos de test elegidos en el item anterior.*/

#include <stdio.h>

int main()
{
    int ventasTri;
    int comision = 0;

    printf("CÁLCULO DE COMISIÓN\nIngrese las ventas trimestrales: ");
    scanf("%d", &ventasTri);
    printf("\n******************\n\n");

    if (ventasTri < 0)
    {
        printf("Error: las ventas fueron negativas.");
        scanf("%d", &ventasTri);
        return 1;
    }
    
    if (ventasTri < 20001)
    {
        comision = ventasTri * 0.05;
    }
    else
    {
        if (ventasTri < 50001)
        {
            comision = ventasTri * 0.07 + 1000;
        }
        else
        {
            comision = ventasTri * 0.1 + 3100;
        }
        
        
    }

    printf("Las ventas trimestrales fueron: %d\nLa comisión obtenita fue: %d",ventasTri, comision);
    scanf("%d", ventasTri);//comando para evitar que la consola se cierre.
    return 0;
}