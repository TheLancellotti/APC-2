#include <stdio.h>
int main()
{
    float valor;
    int notas100, notas50, notas20, notas10, notas5, notas2;
    int moedas1, moedas50, moedas25, moedas5, moedas10, moedas1cent;
    printf("Insira o valor: ");
    scanf("%f", &valor);
    notas100 = valor / 100;
    valor -= notas100 * 100;
    notas50 = valor / 50;
    valor -= notas50 * 50;
    notas20 = valor / 20;
    valor -= notas20 * 20;
    notas10 = valor / 10;
    valor -= notas10 * 10;
    notas5 = valor / 5;
    valor -= notas5 * 5;
    notas2 = valor / 2;
    valor -= notas2 * 2;

    notas100 = valor / 100;
    valor -= notas100 * 100;
    notas50 = valor / 50;
    valor -= notas50 * 50;
    notas20 = valor / 20;
    valor -= notas20 * 20;
    notas10 = valor / 10;
    valor -= notas10 * 10;
    notas5 = valor / 5;
    valor -= notas5 * 5;
    notas2 = valor / 2;
    valor -= notas2 * 2;
    moedas1 = valor / 1;
    valor -= moedas1 * 1;
    moedas50 = valor / 0.50;
    valor -= moedas50 * 0.50;
    moedas25 = valor / 0.25;
    valor -= moedas25 * 0.25;
    moedas10 = valor / 0.10;
    valor -= moedas10 * 0.10;
    moedas5 = valor / 0.05;
    valor -= moedas5 * 0.05;
    moedas1cent = (int)(valor / 0.01);
    printf("%d moeda(s) de R$1\n", moedas1);
    printf("%d moeda(s) de R$0.50\n", moedas50);
    printf("%d moeda(s) de R$0.25\n", moedas25);
    printf("%d moeda(s) de R$0.10\n", moedas10);
    printf("%d moeda(s) de R$0.05\n", moedas5);
    printf("%d moeda(s) de R$0.01\n", moedas1cent);
    return 0;
}