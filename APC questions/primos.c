/*construa um programa em C onde exista uma função que receba 2 numeros inteiros x e y e retorne quantos numeros primos existem dentro do intervalo fechado entre x e y. 
Na função principal, solicite ao usuario os valores x e y e diga quantos primos a entre eles*/

#include <stdio.h>

int primo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int QuantidadePrimos(int x, int y) {
    int quantidade = 0;
    for (int i = x; i <= y; i++) {
        if (primo(i)){
            quantidade++;
            printf("%d quantidade\n", quantidade);
        }
    }
    return quantidade;
}

int main (){
    int x;
    int y;
    printf("digite dois numeros inteiros:\n");
    scanf("%d %d", &x, &y);
    if (y < x){
        x = y + x;
        y = x - y;
        x = x - y;
    }
    printf("ha %d primos no intervao %d ate %d\n", QuantidadePrimos(x, y), x, y);
    return 0;
}