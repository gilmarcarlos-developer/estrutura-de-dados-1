#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1 = 10;
    int num2 = 0;
    
    printf("%i\n", num1==1);
    printf("%i\n", num2!=1);
        // verdadeiro imprime-> 1
        // falso imprime-> 0
    
    // == comparação positiva 
    // != comparação negativa
    // ! igual a expressão NOT (negação)
    
    printf("Digite um número diferente de 5: ");
    scanf("%i", &num2);
    
    if(num2 != 5){
        printf("verdadeiro\n");
    }else{
        printf("falso\n");
    }
    
    return 0;
}
