#include <stdio.h>
#include <stdlib.h>

int main(){

    // A linguagem C permite criar ponteiros com diferentes níveis de apontamento: ponteiros que apontam para outros ponteiros
    int x = 10;
    int *p = &x;
    int **p2 = &p; // **p significa que é um ponteiro pra ponteiro de inteiro
    //pode ter mais níveis a cada *

    //endereço em p2: p2 -> p = endereço de p
    printf("p2: %d\n", p2); //&p

    //conteúdo do endereço p2: p2 -> p -> &x = endereço de x
    printf("*p2: %d\n", *p2); //&x

    //conteúdo do endereço do endereço: p2 -> p -> &x -> x = 10
    printf("**p2: %d\n", **p2); //x

    printf("\n");
    return 0;
}