#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int lista[5] = {3, 18, 2, 52, 45};
    int maior = lista[0];
    
    for(int x = 0; x < 5; x++)
        if(lista[x] > maior)
            maior = lista[x];
        
    printf("O maior numero é: %i\n", maior);
    
    return 0;
}
