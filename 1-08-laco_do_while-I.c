#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int contador = 0;
    int x = 0;

    do{
        contador++;
        printf("Digite 0 para sair do looping: ");
        scanf("%i", &x);
        
        printf("%i vezes\n", contador);
    }while(x != 0);
    
    return 0;
}
