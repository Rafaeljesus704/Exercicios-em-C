#include <stdio.h>

int main (){
    
    float metro;
    
    printf("Digite o valor que queres a conversão\n=> ");
    scanf("%f", &metro);
    
    printf("o valor de %.2f metros em decimentro = %.2f, centimetro = %.2f e milimetro = %.3f\n", metro, metro*10, metro*100, metro*1000);


    return 0;
}
