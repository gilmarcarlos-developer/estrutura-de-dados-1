#include <stdio.h>

int main(){

    int n, numero;
    int soma = 0, maior = 0, menor = 0;
    
    printf("\tExemplo 2!\nDigite um numero: ");
    scanf("%d", &n);
    
    menor = numero + 1;
    
    for(int x = 0; x < n; x++){
        scanf("%d", &numero);
        
        soma = soma + numero;
        
        if(numero > maior){
            maior = numero;
        }
        if(numero < menor){
            menor = numero;
        }
    }
    
    printf("\nSoma = %d, Maior = %d, Menor = %d", soma, maior, menor);
    
    printf("\nFim do programa!\n");
    return 0;
}
