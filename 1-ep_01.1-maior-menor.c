#include <stdio.h>

int main(){
    //mostrar soma, maior e menor de n numeros digitados
    int x, n = 0, numero = 0;
    int soma, maior, menor;
    
    printf("\tExemplo 2!\nDigite um numero: ");
    scanf("%d", &n);
    
    printf("Agora digite %i numeros:\n", n);
    scanf("%d", &numero);
    soma = menor = maior = numero;

    for(int x = 1; x < n; x++){
        scanf("%d", &numero);
        soma = soma + numero;
        
        if(numero > maior)
            maior = numero;
        if(numero < menor)
            menor = numero;
    }

    printf("\nSoma = %d, Maior = %d, Menor = %d", soma, maior, menor);
    printf("\nFim do programa!\n");
    return 0;
}

