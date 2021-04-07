#include <stdio.h>

int main(){
    // entre com um numero e mostre todos os divisores dele
    int num = 0;
    
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);
    
    printf("\nOs divisores de %i sao: ", num);
    
    for(int x = 1; x <= num; x++){
        if(num % x == 0)
            printf("%i ", x);
    }
    
    return 0;
}
