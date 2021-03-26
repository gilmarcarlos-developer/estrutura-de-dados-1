#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int contador = 0;
    int x = 0;
    //executa pelo menos uma vez, e depois verifica se vai continuar executando
    do{
        contador++;
        printf("Digite 0 para sair do looping: ");
        scanf("%i", &x);
        
        printf("%i vezes\n", contador);
    }while(x != 0);
    
    
    return 0;
}
