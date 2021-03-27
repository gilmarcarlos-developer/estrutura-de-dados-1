#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[20] = "Linguagem C";
    int j, total = 0;
    int tamanho = strlen(str);
    
    for(int x = 0; x < tamanho; x++){
        //desse modo fica um if muito longo (ainda faltam as vogais em letra maiuscula por exemplo
        if(str[x] == 'a' || str[x] == 'e' || str[x] == 'i' || str[x] == 'o' || str[x] == 'u'){
            total++;
        }
    }
    
    printf("Numero de vogais = %d\n", total);
    
    //um jeito mais fácil seria assim
    char palavra[20] = "Linguagem C";
    char vogais[11] = "aeiouAEIOU";    
    int tamanho1 = strlen(str);
    int tamanho2 = strlen(vogais);
    int qt_vogais = 0;
    
    for(int i = 0; i < tamanho1; i++){
        for(int y = 0; y < tamanho2; y++){
            if(str[i] == vogais[y]){
                qt_vogais++;
                break;
            }
        }
    }
    printf("Numero de vogais = %d\n", qt_vogais);
    
    return 0;
}
