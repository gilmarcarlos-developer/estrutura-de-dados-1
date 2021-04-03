#include <stdio.h>

void imprime_vetor(int vetor[], int qtd){
    
    int aux = qtd, aux2 = 2;
    
    for(int x = 0; x < qtd; x++){
        printf("%i ", vetor[x]);
        if(aux%aux2 == 0){
            printf("\n");
        }
        aux--;
        aux2++;
    }
}

int main(){
    
    int qt_vetor = 6;
    int vetor[qt_vetor];
    
    printf("Preencha o vetor: ");
    for(int x = 0; x < qt_vetor; x++){
        scanf("%i", &vetor[x]);
    }
    
    printf("\n");
    
    imprime_vetor(vetor, qt_vetor);
    
    printf("\n");
    return 0;
}
