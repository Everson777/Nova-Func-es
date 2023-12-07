#include <stdio.h>
#include <string.h>

float inflacionaPreco(float preco)
{
    float resultado;

    if (preco < 100)
    {
        resultado = preco * 1.1;
    }
    else
    {
        resultado = preco * 1.2;
    }
}

int main()
{

    float preco, precoFlacionado;

    printf("Digite o preco do produto:");
    scanf("%f", &preco);

    precoFlacionado = inflacionaPreco(preco);

    printf("\nPreço inflacionado: R$ %.2f", preco);

    return 0;
}