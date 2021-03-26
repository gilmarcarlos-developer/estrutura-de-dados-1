#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 0;
    
    printf("Digite um numero entre 0 e 3: ");
    scanf("%i", &i);
    
    switch(i){
        case 0:
            printf("A opcao digitada foi: 0\n");
            break;
        case 1:
            printf("A opcao digitada foi: 1\n");
            break;
        case 2:
            printf("A opcao digitada foi: 2\n");
            break;
        case 3:
            printf("A opcao digitada foi: 3\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }
    
    return 0;
}
