#include <stdio.h>

int perfeito(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if(n % i == 0){
            soma += i;
        }
    }
    if(soma == n){
        return 1;
    }
    return 0;
}

int main () {
    int n;
    int quantidade = 0;
    int menor = 0;
    int maior = 0;
    int soma = 0;
    printf("digite 10 numeros inteiros:\n");
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &n);
        if(perfeito(n)) {
            quantidade++;
            if(menor == 0 || n < menor){
                menor = n;
            }
            if(n > maior){
                maior = n;
            }
            printf("%d e um numero perfeito.\n", n);
            soma += n;
        }
    }
    printf("Foram encontrados %d numeros perfeitos\n", quantidade);
    if(quantidade > 0){
    printf("O maior numero perfeito foi: %d\n", maior);
    printf("O menor numero perfeito foi: %d\n", menor);
    }
    printf("O somatorio dos numeros perfeitos encontrados foi: %d\n", soma);
    return 0;
}