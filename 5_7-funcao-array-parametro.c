#include <stdio.h>
#include <stdlib.h>

void imprime(int *vet, int tamanho){
    //na função continuamos usando colchete e indice
    for(int x = 0; x < tamanho; x++){
        //pra array não precisa colocar * na frente, só ali em cima no parametro
        printf("%d ", vet[x]);
    }
}

//precisa da informação do tamanho das outras dimensões
void imprime_matriz(int m[][2], int tam){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < 2; j++){
            printf("%d \n", m[i][j]);
        }
    }
}

int main(){
    
    /*
    array são sempre passados "por referência" para uma função
    
    isso evita a cópia desnecessária de grandes quantidades de dados durante a chamada da função, o que afetaria o desempenho do programa
    */
    
    /* passar um array "por referência:
        void imprime(int *m, int tamanho_vetor);
        ou
        void imprime(int m[], int tamanho_vetor);
    */

    //exemplo
    int vetor[5] = {1,2,3,4,5};
    imprime(vetor, 5);
    
    printf("\n");
    //--------
    // arrays com mais de uma dimensão precisam da informação do tamanho das outras dimensões
    int matriz[3][2] = {{1,2},{3,4},{5,6}};
    //aqui passa o numero do primeiro colchete (linhas)
    imprime_matriz(matriz,3);
    
    printf("\n");
    return 0;
}

