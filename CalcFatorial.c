#include <stdio.h>

int main (){
    
    int fatorial;
    int resposta = 1;

    printf("Digite o numero para fatorar\n=> ");
    scanf("%i", &fatorial);

    for (; fatorial >= 1; --fatorial){
        
        resposta *= fatorial;
    }

    printf("O numero Fatorial é:%i\n", resposta);

    return 0;
}
