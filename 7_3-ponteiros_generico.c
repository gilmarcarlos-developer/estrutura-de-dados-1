#include <stdio.h>
#include <stdlib.h>

int main(){
    
    /* 
     ponteiro genérico pode apontar para todos os tipos de dados existentes ou que ainda serão criados
     
     forma geral
         void *nome_ponteiro;
     */
    
    //
    void *p;
    int *p1, p2 = 10;
    
    p1 = &p2; //p1 recebe o endereço de p2 (p1 tá apontando para p2)
    p = &p2; //mesma coisa
    printf("Endereco em p: %p\n", p);
    
    p = &p1; //p recebe endereço de p1 (então um ponteiro está apontando para outro ponteiro)
    printf("Endereco em p: %p\n", p);
    
    p = p1; //p recebe o valor de p1 (p1 é um ponteiro, e p1 tinha armazenado o endereço do p2 lá no inicio)
    printf("Endereco em p: %p\n", p);
    
    //-----------
    /*
     antes de acessar o conteúdo, é preciso converter o ponteiro genérico para tipo de ponteiro que quer trabalhar
     */
    void *pp;
    int p4 = 15;
    pp = &p4; //pp recebe o endereço de p4
    
    //printf("Conteudo: %d\n", *pp); //dá erro porque pp é um ponteiro genérico, é preciso converter para um tipo
    printf("Conteudo: %d\n", *(int*)pp); //jeito correto
    
    //----------
    /*
     as operações aritméticas são sempre realizadas com base em uma unidade de memória (1 byte)
     
     diferente da aula anterior, nesse ele faz todas operações como se fosse tipo char
     */
    
    return 0;
}
