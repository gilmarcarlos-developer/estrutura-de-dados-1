#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int lista[5] = {1,2,3,4,5};
    int soma = 0;
    
    for(int x = 0; x < 5; x++)
        soma = soma + lista[x];
    
    printf("soma = %i\n", soma);
    
    return 0;
}
