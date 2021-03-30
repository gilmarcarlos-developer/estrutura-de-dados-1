#include <stdio.h>
#include <stdlib.h>

int main(){
    
    /*
     variável: armazenam dados (int, double, char, etc)
     ponteiros: é um tipo especial de variável que armazena o endereço da memória
     
     forma geral:
         tipo_ponteiro *nome_ponteiro
    */
    
    //ponteiros não inicializados apontam para um lugar indefinido, SEMPRE INICIALIZAR
    int *p = NULL, *z = NULL;
    int x = 10, y = 3;
    
    p = &x; // o p recebe o endereço da váriavel x, não o valor que tem dentro dela
    z = &y;
    
    printf("x = %d\n", x);
    printf("&x = %d\n", &x);
    printf("aqui mostra o endereço de memória de x: %d\n", p);
    printf("aqui mostra o valor que contém dentro de x: %d\n", *p);
    printf("z = %d\n", z);
    
    //---------
    printf("\n");
    // o operador asterisco (*) permite modificar o valor de outra variável de forma indireta
    printf("x = %d\n", x);
    *p = 12; //modifica o valor do x porque *p é aponta para o x
    printf("*p = %d\n", *p);
    printf("x = %d\n", x);
    
    return 0;
}
