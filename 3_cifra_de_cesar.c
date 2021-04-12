/* 
• Faça uma função para criptografar uma frase com a cifra de César sobre uma string;
• Faça também uma função para reverter o rocesso.
*/ 

#include <stdio.h>
#include <stdlib.h>

#define tam 50
#define n 3
#define alf 26

void encrypt(char texto_secreto[], char alfabeto[], int tamanho){
    int aux = 0;

    for(int x = 0; x < tamanho-1; x++){
        for(int y = 0; aux != -1; y++){
            if(texto_secreto[x] == alfabeto[y] && y+n < alf){
                texto_secreto[x] = alfabeto[y+n];
                aux = -1;
            }
            if(texto_secreto[x] == alfabeto[y] && y+n >= alf){
                y = y + n;
                y = y - alf;
                texto_secreto[x] = alfabeto[y];
                aux = -1;
            }
        }
        aux = 0;
    }
    printf("frase encriptada: %s", texto_secreto);
}

void decrypt(char texto_protegido[], char alfabeto[], int tamanho){
    int aux = 0;

    for(int x = 0; x < tamanho-1; x++){
        for(int y = 0; aux != -1; y++){
            if(texto_protegido[x] == alfabeto[y] && y-n >= 0){
                texto_protegido[x] = alfabeto[y-n];
                aux = -1;
            }
            if(texto_protegido[x] == alfabeto[y] && y-n < 0){
                y = alf + (y-n);
                texto_protegido[x] = alfabeto[y];
                aux = -1;
            }
        }
        aux = 0;
    }
    printf("frase desencriptada: %s", texto_protegido);
}

int main(){

    char frase[tam];
    char alfabeto[alf] = "abcdefghijklmnopqrstuvwxyz";

    printf("Digite uma frase: ");
    fgets(frase, tam, stdin);

    char aux3;
    int tamanho = 0;
    for(int x = 0; aux3 != '1'; x++){
        if(frase[x] == '\0'){
            printf("---------------\n");
            aux3 = '1';
        }else{
            tamanho++;
        }
    }
    
    encrypt(frase, alfabeto, tamanho);
    printf("---------------\n");
    decrypt(frase, alfabeto, tamanho);

    return 0;
}