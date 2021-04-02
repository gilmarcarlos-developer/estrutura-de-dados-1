#include <stdio.h>

int main(){
 
    int lista[5] = {20, 30, 50, 10, 40};
    int numero = 0, encontrou = 0;
    
    scanf("%d", &numero);

    for(int i = 0; i < 5; i++){
        if(lista[i] == numero){
            encontrou = 1;
        }
    }
    
    if(encontrou == 1){
        printf("Encontrou!\n");
    }else{
        printf("Nao encontrou!\n");
    }
    
    return 0;
}
