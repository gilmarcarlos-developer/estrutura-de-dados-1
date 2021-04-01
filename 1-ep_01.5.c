#include <stdio.h>

int main(){

    int n = 0;
    int aux = 0, numeros = 0, crescente = 0;
    
    printf("Digite um numero: ");
    scanf("%i", &n);
   
    for(int x = 0; x < n; x++){        
        scanf("%i", &numeros);        
        if(aux < numeros)
            crescente++;
        aux = numeros;
    }
    
    if(crescente == n){
        printf("Sim\n");
    }else{
        printf("Não\n");
    }
    
    return 0;
}
