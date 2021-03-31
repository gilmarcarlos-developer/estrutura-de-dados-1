#include <stdio.h>

int main(){
 
    // mostrando quantos numeros digitados sao pares e quantos sao impares
    
    int n = 0, numeros = 0;
    int par = 0, impar = 0;
    
    printf("Digite um numero: ");
    scanf("%i", &n);
    
    printf("Agora digite %i numeros: \n", n);
    do{
        scanf("%i", &numeros);
        
        if(numeros%2 == 0){
            par++;
        }else{
            impar++;
        }
        
        n--;
    }while(n != 0);
    
    printf("Foram digitados %i numeros pares e %i numeros impares.", par, impar);
    
    printf("\n");
    return 0;
    
}
