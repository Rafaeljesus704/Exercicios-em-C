#include <stdio.h>


int main(){

    int a, b, c;

    for(a=1; a<=9; a++){
        for(b=1; b<=10; b++){
            c = a*b;
            printf("%i x %i = %i\n",a, b, c);
            }
        printf("\n");    
    }

    return 0;
}
