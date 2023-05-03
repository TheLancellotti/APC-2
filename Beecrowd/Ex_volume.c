#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
        char nome[25];
        char matricula[25];
        float nota;
        char genero;
}t_aluno;

int main(){
    
    int x;
    t_aluno a;
    t_aluno ana = ( .nome = "ana",.matricula = "A1", .nota)
    t_aluno *ptr;
    ptr = &a;

    printf("me forneça um nome:");
    fgets(a.nome,49,stdin);
    a.nome[strlen(a.nome) - 1] = '\0';

    printf("me forneça uma matricula:");
    fgets(a.matricula,49,stdin);
    a.matricula[strlen(a.matricula) - 1] = '\0';

    printf("me forneça uma nota:");
    scanf("%f", &a.nota);

    printf("me forneça um genero:");
    scanf("%c", &a.genero);

    ptr->nota = 10;

return 0;
}

void menção(float x){
    if (x>=9){
    
    }
    else{
        if (x>=7){

        }
        else{
            if (x>=5){

            }
            else{

            }
        }

    }
}