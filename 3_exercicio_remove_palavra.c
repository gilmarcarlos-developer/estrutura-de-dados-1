#include <stdio.h>

// faça uma função que receba uma frase e remova a segunda palavra dessa frase

void remove_segunda_palavra(char f[], int tam){
 
    int aux = 0, primeiro_espaco = 0, segundo_espaco = 0;
    for(int x = 0; x < tam; x++){
        if(f[x] == ' ' && aux == 1){
            segundo_espaco = x + 1;
            break;
        }
        if(f[x] == ' ' && aux == 0){
            primeiro_espaco = x + 1;
            aux++;
        }
    }

    //muda as letras de posição
    int aux1 = segundo_espaco;
    for(int x = segundo_espaco; x > primeiro_espaco; x--){
        for(int y = aux1; y <= tam; y++){
            f[y-1] = f[y];
        }
        aux1--;
    }
    puts(f);
}

int main(){
    int tamanho = 0;
    char aux;
    char frase[30];

    printf("Digite uma frase: ");
    fgets(frase, 30, stdin);
    
    for(int x = 0; aux != '1'; x++){
        if(frase[x] == '\n'){
            frase[x] = '\0';
            aux = '1';
            tamanho = x;
        }
    }

    remove_segunda_palavra(frase, tamanho);
    return 0;
}
