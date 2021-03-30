#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //array é um conjunto de dados armazenados de forma sequencial
    
    //declarei um vetor já preenchido
    int vet[5] = {1, 2, 3, 4, 5};
    //criei um ponteiro que aponta para o vetor; ps: essa declaração sem [] já direciona para a primeira posição do vetor
    int *p = vet;
    
    for(int i = 0; i < 5; i++)
        //então posso trabalhar com o vetor usando o ponteiro
        printf("%d  ", p[i]);

    printf("\n");
    //----------------

    //o nome do array é apenas um ponteiro que aponta para o primeiro índice do array
    int vet2[5] = {5, 4, 3, 2, 1};
    int *p2 = vet2;
    
    for(int i = 0; i < 5; i++)
        // p[i] que vi lá em cima é só uma simplificação desse *(p+i) aqui nessa linha
        //o que fiz aqui: p2 está apontando para a primeira posição do vet2, então p2+i pega o p2 inicial e soma com i posições de memória
        printf("%d  ", *(p2+i));
    
    printf("\n");
    //----------------

    /* também podemos declarar um array de ponteiros

    forma geral:
        tipo_dado *nome_array[tamanho];
    */
    int *p_vet[5]; //array de 5 ponteiros: criei um vetor de 5 posições, mas cada posição não é um inteiro e sim um ponteiro de inteiro que aponta para uma outra memória

    //pra que serve isso?
    int x = 10, vet3[2] = {20, 30};
    p_vet[0] = &x;
    p_vet[1] = vet3;

    //mostra a posição de endereço - ponteiro
    printf("p_vet[0]: %p\n", p_vet[0]); //&x
    printf("p_vet[1]: %p\n", p_vet[1]); //&vet3[0]

    //mostra o valor da variável
    printf("*p_vet[0]: %d\n", *p_vet[0]); //x
    printf("p_vet[1][1]: %d\n", p_vet[1][1]); //vet3[1]
    //com um vetor de ponteiro eu consigo criar uma matriz

    printf("\n");
    return 0;
}
