#include <stdio.h>

int main()
{
    int torre = 1, bispo = 0, rainha = 1;

    printf("\n*** Torre ***\n");

    while (torre <= 5)
    {
        printf("Uma casa para a Direita.\n");
        torre++;
    }

    printf("\n\n*** Bispo ***\n");

    do
    {
        printf("Uma casa para Cima e à Direita.\n");
        bispo++;

    } while (bispo <= 4);

    printf("\n\n*** Rainha ***\n");

    for (rainha; rainha <= 8; rainha++)
    {
        printf("Uma casa à Esquerda.\n");
    }
    printf("\n\n"); 
    
    return 0;
}
