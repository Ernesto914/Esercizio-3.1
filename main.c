#include <stdio.h>

int main(void)
{
    int numero;
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("Il numero %d è pari," numero);
    }
    else
    {
        printf("Il numero %d è dispari\n ", numero );
    }
    return 0;
}
