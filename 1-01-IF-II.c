#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 0;
    
    printf("Digite um número diferente de 5: ");
    scanf("%i", &num);
    
    if(num != 5){
        printf("verdadeiro\n");
    }else{
        printf("falso\n");
    }
    
    return 0;
}
