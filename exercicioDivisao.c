#include <stdio.h>


int main(){

    int divisor;
    int dividendo;
    int divisao;


    printf("Digite um numero para dividir\n=> ");
    scanf("%i", &dividendo);
    printf("\nDigite um numero para dividir o primeiro numero\n=> ");
    scanf("%i", &divisor);

    if(divisor != 0 && (dividendo % divisor) == 0){
        divisao = dividendo / divisor;
        printf("a divisao de %i por %i é igual a: %i\n", dividendo, divisor, divisao);
        }
    else if(divisor ==0){
        printf("Ta maluco nengue? zero nao dividi nada, receba inteligencia\n");
        }
    else if(dividendo % divisor >=0){
        printf("essa divisao nao da exata\n");
        }

    return 0;
}
