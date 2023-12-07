#include <stdio.h>
#include <string.h>

#define TAM 6

int verificandoPares(int numeros[])
{
    int i;
    int pares = 0;

    for (i = 0; i < TAM; i++)
    {

        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
    }
    return pares;
}

int verifandoImpares(int numeros[])
{

    int i;
    int impares = 0;

    for (i = 0; i < TAM; i++)
    {

        if (numeros[i] % 2 != 0)
        {
            impares++;
        }
    }
    return impares;
}

int main()
{
    int pares = 0, impares = 0;
    int numeros[6];
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("\nDigite o %dº numero:", i + 1);
        scanf("%d", &numeros[i]);
    }

   impares = verifandoImpares(numeros); 
     pares = verificandoPares(numeros);
    printf("\nExibindo Dados...");


    printf("\nImpares:%d", impares);
    printf("\nPares:%d", pares);

return 0;
}
