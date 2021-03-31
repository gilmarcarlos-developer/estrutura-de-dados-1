#include <stdio.h>

int main(){

    // mostrando maior, menor e soma
    
    int n = 0, numeros = 0;
    int maior = 0, menor = 0, soma = 0;
    int aux = 1;
    
    printf("Digite um numero: ");
    scanf("%i", &n);
    
    printf("Agora digite %i numeros: ", n);
    do{
        scanf("%i", &numeros);
        
        //maior numero
        if(numeros > maior){
            maior = numeros;
            if(aux == 1){
                menor = numeros;
                aux = 2;
            }
        }
        
        //menor numero
        if(numeros < menor){
            menor = numeros;
        }
        
        //soma de todos
        soma = soma + numeros;
        n--;

    }while(n != 0);

    printf("Maior numero digitado = % i \nMenor numero digitado = %i \nSoma = %i", maior, menor, soma);
    
    printf("\n");
    return 0;
}
