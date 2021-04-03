#include <stdio.h>

#define tam 10

int main(){
    
    int vetor[tam];
    int aux = 0;
    
    //preenche o vetor
    for(int x = 0; x < tam; x++){
        printf("Digite: ");
        scanf("%i", &vetor[x]);
        
        //para o programa se o numero digitado for -1
        if(vetor[x] == -1){
            break;
        }
        
        aux++; //usado nesse for e no próximo
        
        //percorre o vetor a partir do segundo numero digitado
        if(x > 0){
            for(int z = x; z > 0; z--){
                if(vetor[z] < vetor[z-1]){
                    int menor = vetor[z];
                    int maior = vetor[z-1];
                    
                    vetor[z] = maior;
                    vetor[z-1] = menor;
                }
            }
        }
        
        //mostra o vetor digitado até o momento
        for(int y = 0; y < aux; y++){
            printf("%i ", vetor[y]);
        }
        
        printf("\n");
    }
        
    return 0;
}
