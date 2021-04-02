#include <stdio.h>

void muda_valor(int vetor[]){
    vetor[0] = 90;
    
    printf("%d\n", vetor[0]);
}

int main(){
    int v[3] = {200, 500, 300};
    
    //nesse caso ele recebe o vetor todo e altera o valor do indice 0
    muda_valor(v);
    
    printf("%d %d %d\n", v[0], v[1], v[2]);
    
    return 0;
}
