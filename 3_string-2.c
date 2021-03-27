#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char str1[20] = "Hello World";
    char str2[20];
    int x = 0;
    
    //passando uma palavra de uma string para outra
    //o '\0' indica final da palavra
    for(x = 0; str1[x] != '\0'; x++)
        str2[x] = str1[x];
    str2[x] = '\0';
    
    printf("%s\n", str2);
    
    /* a linguagem c possui algumas funções para manipular strings 
    
    biblioteca <string.h>
    
    strlen mostra o tamanho da string
    strcpy copia uma string
    strcat concatena duas strings
    strcmp compara duas string
    
    */
    
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
