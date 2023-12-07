#include <stdio.h>
#include <string.h>


int somar(int n1,int n2){
int resultado;
resultado = n1 + n2;
return resultado;
}
int subtrair(int n1,int n2){
int resultado;
resultado = n1 - n2;
return resultado;
}
int multiplicar(int n1,int n2){
int resultado;
resultado = n1 * n2;
return resultado;
}
int dividir(int n1,int n2){
 
return n1 / (float) n2;
}



void cabecalho(){

printf("\n=================================\n");
printf("\t\t Tabuada:");
printf("\n=================================\n");
}
int main(){
int soma,subtracao,multiplicacao;
int primeiroNumero, segundoNumero;
float divisao;

printf("\nDigite o primeiro numero:");
scanf("%d",&primeiroNumero);   

printf("\nDigite o segundo numero:");
scanf("%d",&segundoNumero);   


soma = somar(primeiroNumero,segundoNumero);
subtracao = subtrair(primeiroNumero,segundoNumero);
multiplicacao = multiplicar(primeiroNumero,segundoNumero);
divisao = dividir(primeiroNumero,segundoNumero);


printf("\nExibindo Dados...");

printf("\nSoma:%d",soma);
printf("\nSubtração:%d",subtracao);
printf("\nMultiplicação:%d",multiplicacao);
printf("\nDivisão:%.2f",divisao);


}



