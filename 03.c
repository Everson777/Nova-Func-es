#include <stdio.h>
#include <string.h>




float converterEmCentimetros(float metros){

    return metros * 100;
}





int main(){

float metros, centimetros;


printf("Digite um valor em metro:");
scanf("%f",&metros);
    
    centimetros = converterEmCentimetros(metros);

    printf("\nQuantidade por centimetros: %.1f",centimetros);
    
    return 0;
}