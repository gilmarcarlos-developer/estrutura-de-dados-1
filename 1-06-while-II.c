#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int x = 0;
    int valorDigitado = 0;
    
    printf("Informe quantas vezes repetir a instrução: ");
    scanf("%i", &valorDigitado);
    
    while(x < valorDigitado){
        printf("%i\n", x * 10);
        x++;
    }
    
    return 0;
}
