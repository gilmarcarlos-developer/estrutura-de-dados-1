#include <stdio.h>
#include <stdlib.h>

union tipo{
    short int x;
    unsigned char c[2];
};

int main(){
    /* forma geral
     * union nome_union{
     *      tipo1 nome1;
     *      tipo2 nome2;
     * };
     */
    
    //declaração de uma variável union
    //é igual o struct
    union tipo u;
    u.x = 235;
    printf("x = %d\n", u.x);

    u.c[0] = 'a';
    u.c[1] = 'b';
    printf("c[0] = %c\n", u.c[0]);
    printf("c[1] = %c\n", u.c[1]);
    
    //a diferença é: o union usa menos memória que o struct porque o union usa memória compartilhada das variaveis, então não dá pra acessar as variáveis ao mesmo
    // utilizar uma união apenas quando as variáveis não forem usadas ao mesmo tempo
    
    return 0;
}
    
