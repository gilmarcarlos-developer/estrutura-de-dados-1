#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    printf("Palavra Linguagem C de trás pra frente\n");
    
    //invertendo uma string
    char str[20] = "Linguagem C";
    
    //aqui só tá mostrando na tela
    //strlen(str)-1 começa na ultima caractere
    for(int x = strlen(str)-1; x >= 0; x--){
        printf("%c", str[x]);
    }
    
    printf("\n");
    
    //aqui usa um vetor auxiliar para salvar a palavra invertida
    char str2[20];
    int j = 0;
    
    for(int x = strlen(str)-1; x >= 0; x--){
        str2[j] = str[x];
        j++;
    }
    str2[j] = '\0';
    //aqui eu to mostrando na tela o novo vetor
    printf("nova string: %s", str2);
    
    printf("\n-----\n");
    
    //como inverter dentro do próprio vetor
    char str3[20] = "Linguagem C";
    char c;
    int tam = strlen(str3);
    
    for(int x = 0; x < tam/2; x++){
        c = str3[x];
        str3[x] = str3[tam-1-x];
        str3[tam-1-x] = c;
    }
    printf("Invertendo dentro da própria string: %s", str3);
    
    printf("\n");
    return 0;
}
