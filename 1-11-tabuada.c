#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 0, resultado = 0;
    
    printf("Digite um numero: ");
    scanf("%i", &num);
    
    printf("\nA tabuada do %i eh: \n", num);
    for(int x = 0; x <= 10; x++){
        resultado = num * x;
        printf("%i x %i = %i\n", num, x, resultado);
    }
    
    return 0;
}
