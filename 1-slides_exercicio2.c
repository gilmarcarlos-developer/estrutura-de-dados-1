#include <stdio.h>

int main(){
    // mostrando maior, menor e soma
    int n = 0, numeros = 0;
    int maior = 0, menor = 0, soma = 0;
    
    printf("Digite um numero: ");
    scanf("%i", &n);
    
    printf("Agora digite %i numeros: ", n);
    scanf("%i", &numeros);
    soma = maior = menor = numeros;

    for(int x = 1; x < n; x++){
        scanf("%i", &numeros);

        if(numeros > maior)
            maior = numeros;
        if(numeros < menor)
            menor = numeros;

        soma = soma + numeros;
    }

    printf("Maior numero digitado = % i \nMenor numero digitado = %i \nSoma = %i\n", maior, menor, soma);   
    return 0;
}
