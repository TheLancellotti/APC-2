#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, Par = 0, Impar = 0, Positivo = 0, Negativo = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            Par++;
        } 
        else{
            Impar++;
        }
        if (num > 0) {
            Positivo++;
        }
        if (num < 0) {
            Negativo++;
        }
        
    }

    printf("%d valor(es) par(es)\n", Par);
    printf("%d valor(es) impar(es)\n", Impar);
    printf("%d valor(es) positivo(s)\n", Positivo);
    printf("%d valor(es) negativo(s)\n", Negativo);
}