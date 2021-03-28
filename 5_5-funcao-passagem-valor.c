#include <stdio.h>
#include <stdlib.h>

void soma_mais_um(int n){
    n = n + 1;
    printf("Dentro da funcao: x = %d\n", n);
}

int main(){
    
    /*
    a linguagem c permite dois tipos de passagem de parametros para uma função
    
    por valor:
    cópia do dado(padrão)
    
    por referência:
    endereço do dado original
    */
    
    /*
    passagem por valor: uma cópia do dado é feita e passada para a função
    
    é o modo padrão para os tipos básicos pré-definidos: int, char, float e double
    e tipos definidos pelo programador: struct
    */
    
    /* exemplos de passagem "por valor"
    void imprime_log(float x);
    int maior(int x, int y);
    void exibe_dados(struct aluno a);
    */
    
    //exemplo prático
    int x = 5;
    printf("Antes de chamar a funcao: x = %d\n", x);
    soma_mais_um(x);
    printf("Depois da funcao: x = %d\n", x);
    
    
    return 0;
}
