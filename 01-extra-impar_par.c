#include <stdio.h>

int main(){
    int numero = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero%2 == 0)
        printf("\nO numero digitado é par!\n");
    else
        printf("\nO numero digitado é impar!\n");

    return 0;
}