#include <stdio.h>

int main(){
    float valor;
    int nota[6] = 0,moedas[6] = 0,valormoeda;
    scanf("%f", &valor);
    for (int i=0;i<6;i++){
        nota[i] = 0;
    }
    printf("NOTAS:\n");
    if (valor >= 100){
        nota[0] = valor / 100;
        valor -= (100 * nota[0]);
    }
    printf("%d nota(s) de R$ 100.00\n",nota[0]);
    if (valor >= 50){
        nota[1] = valor / 50;
        valor -= (50 * nota[1]);
    }
    printf("%d nota(s) de R$ 50.00\n",nota[1]);
    if (valor >= 20){
        nota[2] = valor / 20;
        valor -= (20 * nota[2]);
    }
    printf("%d nota(s) de R$ 20.00\n",nota[2]);
    if (valor >= 10){
        nota[3] = valor / 10;
        valor -= (10 * nota[3]);
    }
    printf("%d nota(s) de R$ 10.00\n",nota[3]);
    if (valor >= 5){
        nota[4] = valor / 5;
        valor -= (5 * nota[4]);
    }
    printf("%d nota(s) de R$ 5.00\n",nota[4]);
    if (valor >= 2){
        nota[5] = valor / 2;
        valor -= (2 * nota[5]);
    }
    printf("%d nota(s) de R$ 2.00\n",nota[5]);


     for (int i=0;i<6;i++){
        moedas[i] = 0;
    }
    printf("MOEDAS:\n");
    if (valor >= 1){
        moedas[0] = valor / 1;
        valor -= (1 * moedas[0]);
    }
    printf("%d moeda(s) de R$ 1.00\n",moedas[0]);
    if (valor >= 0.50){
        // valor = valor * 100
        moedas[1] = valor / 0.50;
        valor -= (0.50 * moedas[1]);
    }
    printf("%d moeda(s) de R$ 0.50\n",moedas[1]);
    if (valor >= 0.25){
        moedas[2] = valor / 0.25;
        valor -= (0.25 * moedas[2]);
    }
    printf("%d moeda(s) de R$ 0.25\n",moedas[2]);
    if (valor >= 0.10){
        moedas[3] = valor / 0.10;
        valor -= (0.10 * moedas[3]);
    }
    printf("%d moeda(s) de R$ 0.10\n",moedas[3]);
    if (valor >= 0.05){
        moedas[4] = valor / 0.05;
        valor -= (0.05 * moedas[4]);
    }
    printf("%d moeda(s) de R$ 0.05\n",moedas[4]);
    if (valor >= 0.01){
        moedas[5] = (valor / 0.01) + 0.01;
        valor -= (2 * moedas[5]);
    }
        printf("%d moeda(s) de R$R$ 0.01\n",moedas[5] );
    
    
    return 0;
}