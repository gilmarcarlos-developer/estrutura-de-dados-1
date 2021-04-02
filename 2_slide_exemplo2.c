#include <stdio.h>
#define v 10
//criar uma função que troca todos os números primos de um vetor pelo número -1

void muda_vetor(int vet[]){
    int primo = 0;
    
    //aqui ele percorre o vetor
    for(int x = 0; x < v; x++){
        //aqui ele percorre os numeros entre 2 e o valor atual do vetor
        for(int y = 2; y < vet[x]; y++){
            //aqui verifica se é primo
            if(vet[x] % y == 0){
                primo++;
            }
        }
        if(primo == 0){
            vet[x] = -1;
            printf("%d ", vet[x]);
        }else{
            printf("%d ", vet[x]);
        }
        primo = 0;
    }
        
}

int main(){
    
    int vetor[v] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    
    for(int x = 0; x < v; x++){
        printf("%d ", vetor[x]);
    }
    
    printf("\n");
    
    muda_vetor(vetor);
    
    
    return 0;
}
