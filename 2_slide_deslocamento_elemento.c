#include <stdio.h>

int main(){
        
    int lista[5];
    int numero = 0;
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &numero);
        
        for(int k = i; k > 0; k--){
            lista[k] = lista[k-1];
        }
        lista[0] = numero;
    }
    
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("%d", lista[i]);
    }
    printf("\n");
    
    return 0;
}
