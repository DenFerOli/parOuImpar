#include <stdio.h>

int main()
{
    /* Algoritmo Par Ou Impar em C */
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("O numero %d e Par!", numero);
    }
    else
    {
        printf("O numero %d e Impar", numero);
    }
    // sw
    return 0;
}
