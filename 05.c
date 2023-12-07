#include <stdio.h>
#include <string.h>

#define TAM 3

float calcularMedia(float notas[])
{
    int i;
    float soma = 0;

    for (i = 0; i < TAM; i++)
    {
        soma += notas[i];
    }
}
char *verificarSituacao(float media)
{
    char resultado[200];
    media >= 7 ? strcpy(resultado, "Aprovado!") : strcpy(resultado, "Reprovado!");
}

void mostrarResultados(int notas[])
{

    printf("Media: %.2f \n", calcularMedia(notas));
    printf("Resultado: %s \n", verificandoSituacao(calcularMedia(notas)));
}

int main()
{
    float notas[TAM];
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite a %dº:", i + 1);
        scanf("%f", &notas[i]);
    }
return 0;
}