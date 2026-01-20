#include <stdio.h>
#include <stdbool.h>

int numero1;
int numero2;
int desicion;

bool veradad = true;
int main() {
    printf("introduce tu primer numero:\n");
    scanf("%d", &numero1);
    printf("introduce tu segundo numero:\n");
    scanf("%d", &numero2);
    printf(" %d que quieres hacer? 1)suma | 2)resta | 3)divison | 4)multiplicacion\n ", &desicion);
    scanf("%d", &desicion);

    while (veradad)
    {
        if (desicion == 1)
        {
            int suma = numero1 + numero2;
            printf("tu suma es: %d", suma);
            break;
        }
        if (desicion == 2)
        {
            int resta = numero1- numero2;
            printf("Tu resta es: %d", resta);
            break;

        }

        if (desicion ==3)
        {
            int division = numero1 / numero2;
            printf("Tu division es: %d", division);
            break;
        }
        if (desicion ==4)
        {
            int multiplicacion = numero1 * numero2;
            printf ("Tu multiplicasion es: %d", multiplicacion);
            break;
        }        
    }

    return 0;
}