#include <stdio.h>

void muda_valor(int vetor[]);

int main(){
    int v[3] = {200, 500, 300};
    
    muda_valor(v); /* aqui passa a primeira posição do vetor, 
				sendo assim eu tenho acesso ao vetor inteiro não precisa colocar os colchetes */
    
    printf("%d %d %d\n", v[0], v[1], v[2]);
    
    return 0;
}

void muda_valor(int vetor[]){
    vetor[1] = 90;
    
    printf("%d\n", vetor[0]);
}
