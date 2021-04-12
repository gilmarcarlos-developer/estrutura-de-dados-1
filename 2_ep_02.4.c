#include <stdio.h>
#include <stdlib.h>

/* Implemente a função remover_duplicados, que recebe um vetor de números inteiros positivos organizados em ordem crescente. 
A função deve eliminar o mínimo de elementos para que o vetor não contenha nenhum valor positivo repetido.
Ao eliminar um elemento, os elementos à diretia serão deslocados à esquerda e será adicionado um valor -1 na última posição. */

void remover_duplicados(int vetor[], int qt){
    int aux = qt-1, aux2 = 0;

    for(int x = 1; x < qt; x++){
        if(vetor[x] != -1 && vetor[x] == vetor[x-1]){
            for(int k = x; k > 0; k--)
                //a posição atual que é igual a anterior troca pelo numero dá proxima
                vetor[x] = vetor[x+1];
            //e aqui movimenta os números depois do atual
            aux2 = x;
            for(int k = x+1; k < qt-1; k++)
                vetor[k] = vetor[k+1];
            //aqui coloca -1 na ultima posição
            vetor[aux] = -1;
            aux--;            
        }
    }
    printf("\n");
    for(int x = 0; x < qt; x++){
        printf("%d ", vetor[x]);
    }
}

int main(){
    int qtd;
    
    printf("Tamanho do vetor: ");
    scanf("%i", &qtd);
    
    int vetor[qtd];

    //receber um vetor de numeros inteiro
    for(int x = 0; x < qtd; x++){
        scanf("%d", &vetor[x]);
    }
    
    remover_duplicados(vetor, qtd);

    printf("\n");
    return 0;
}
