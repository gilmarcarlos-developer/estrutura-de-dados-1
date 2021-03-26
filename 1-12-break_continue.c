#include <stdio.h>
#include <stdlib.h>

int main(){

    //break interrompe todo o ciclo
    //continue interrompe apenas aquela rodada
    for(int x = 0; x <= 10; x++){
        
        if(x == 4){
            printf("continue nao mostra a variavel atual\n");
            continue;
        }
        
        if(x == 7){
            printf("break encerra o ciclo\n");
            break;
        }
        
        printf("%i\n", x);
    }
    
    return 0;
}
