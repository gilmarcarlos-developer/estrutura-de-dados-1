#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char str1[20] = "Hello World";
    char str2[20];
    
    for(int x = 0; str1[x] != '\0'; x++)
        str2[x] = str1[x];
    str2[x] = '\0';
    
    printf("%s\n", str2);
    
    //----- funções da biblioteca <string.h>
    //strlen
    char palavra[20] = "Linguagem C";
    int tamanho = strlen(palavra);
    printf("Palavra inicializada: %s\nTamanho = %d\n", palavra, tamanho);
    
    //strcpy
    char novaPalavra[20];
    strcpy(novaPalavra, palavra);
    printf("Copie a palavra para outra string: %s\n", novaPalavra);
    
    //strcat
    char palavra1[10] = "Bom ";
    char palavra2[10] = "dia";
    strcat(palavra1, palavra2);
    printf("Palavra concatenada: %s\n", palavra1);
    
    //strcmp
    char palavra3[10] = "Bom dia";
    char palavra4[10] = "Noite";
    
    //palavra1 foi concatenada lá em cima e virou "Bom dia"
    if( strcmp(palavra1, palavra3) == 0)
        printf("Strings iguais\n");
    else
        printf("Strings diferentes\n");
    
    return 0;
}
