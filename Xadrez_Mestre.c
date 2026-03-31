#include <stdio.h>
void bispo(int casasBispo)
{
    if (casasBispo > 0)
    {
        printf("Uma casa para Cima e à Direita.\n");
        bispo(casasBispo - 1);
    }
}

void torre(int casasTorre)
{
    if (casasTorre > 0)
    {
        printf("Uma casa para a Direita.\n");
        torre(casasTorre - 1);
    }
}

void rainha(int casasRainha)
{
    if (casasRainha > 0)
    {
        printf("Uma casa à Esquerda.\n");
        rainha(casasRainha - 1);
    }
}
int main()
{
    int casasTorre = 5, casasRainha = 8, cavalo = 1;
    int casasBispo = 5;

    printf("\n*** Torre ***\n");

    torre(casasTorre);

    printf("\n\n*** Bispo ***\n");

    bispo(casasBispo);

    printf("\n\n*** Rainha ***\n");

    rainha(casasRainha);

    printf("\n\n*** Cavalo ***\n");
    // Movimento do cavalo em "L":
    // Primeiro move 2 casas para baixo (loop interno)
    // Depois move 1 casa para a esquerda (loop externo)

    for (int movDir = 1; movDir < 2; movDir++)
    {
        for (int movCima = 1; movCima <= 2; movCima++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    return 0;
}