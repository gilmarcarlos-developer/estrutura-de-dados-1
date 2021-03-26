#include <stdio.h>
#include <stdlib.h>

int main(){
    
    /* >> tipo de dados que temos:
     * char, int, float, double, void (vazio)
     * 
     * >> modificadores que temos:
     * signed: estamos dizendo que declaramos uma variavel e que queremos usar numeros positivos e negativos
     * unsigned: estamos dizendo que só queremos trabalhar com numeros positivos
     * long: estamos dizendo que queremos aumentar a capacidade de armazenamento da variavel
     * short: estamos dizendo que queremos diminuir o tamanho de armazenamento da variavel
     */
    
    unsigned short int u;
    int x = 10;
    double y;
    //sizeof mostra quando bytes a variavel está ocupando
    printf("%i -> variavel u\n", sizeof(u));
    printf("%i -> variavel x\n", sizeof(x));
    printf("%i -> variavel y\n", sizeof(y));
     
    
    
    return 0;
}
