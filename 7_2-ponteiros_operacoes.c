#include <stdio.h>
#include <stdlib.h>

int main(){

    // atribuição: um ponteiro só pode receber o endereço de uma variável do mesmo tipo do ponteiro
    int *p, *p1, x = 10;
    float y = 20.0;
    
    p = &x;
    printf("*p: %d\n", *p);
    
    p1 = p;
    printf("*p1: %d\n", *p1);
    
    //p = &y; //errado, o y é float, pra funcionar tem que ser o mesmo tipo do p
    
    printf("\n");
    //------
    
    //sobre o valor de endereço armazenado por um ponteiro, podemos apenas somar e subtrair valores INTEIROS
    int *pont = 0x5DC; //1500
    
    printf("p: %d\n", pont);
    pont++; //por padrão, 1 numero inteiro ocupa 4 bytes, então vai de 1500 para 1504
    printf("p: %d\n", pont); //1504
    pont = pont + 15;
    printf("p: %d\n", pont); //1564
    pont = pont - 2;
    printf("p: %d\n", pont); //1556
    
    //------
    //as operações de adição e subtração no endereço dependem do tipo de dado que o ponteiro aponta
    int *p4 = 0x5DC;
    char *c = 0x5DC;
    printf("p = %d\nc = %d\n", p4, c);
    p4++; //soma mais 4 por ser inteiro
    c++; //soma mais 1 porque char ocupa 1 bytes
    printf("p = %d\nc = %d\n", p4, c);
    
    //------
    // ponteiros podem ser comparados usando: ==, !=, >, <. >= e <=
    int *p5, *p6, x1, x2;
    p5 = &x1;
    p6 = &x2;
    if(p4 == p5)
        printf("ponteiros iguais\n");
    else
        printf("ponteiros diferentes\n");
    
    
    return 0;
}
