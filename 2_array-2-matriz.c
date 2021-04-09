#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][4];
   
    //leitura
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 4; y++){
            printf("Digite linha[%i] coluna[%i]: ", x, y);
            scanf("%i", &matriz[x][y]);
        }
    }
    
    //exibição
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 4; y++){
            printf("%i ", matriz[x][y]);
        }
        printf("\n");
    }
    
    return 0;
}
