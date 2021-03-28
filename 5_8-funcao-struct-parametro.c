#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x, y;
};

void imprime_valor(int n){
    printf("Valor = %d\n", n);
}

void soma_imprime_valor(int *n){
    *n = *n + 1;
    printf("Valor = %d\n", *n);
}

void atribui(struct ponto *p){
    (*p).x = 26;
    (*p).y = 39;
}

int main(){
    /*
    quando trabalhamos com estruturadas podemos passar para a função:
        * um campo
        * toda a estruturada:
            * por valor
            * por referencia
    */
    
    //------ passando um campo "por valor"
    struct ponto p1 = {10, 20};
    
    imprime_valor(p1.x);
    imprime_valor(p1.y);
    
    //------ passando um campo "por referencia"
    struct ponto p2 = {30, 40};
    
    soma_imprime_valor(&p2.x);
    soma_imprime_valor(&p2.y);
    
    //------ passando uma strutc por referencia
    struct ponto p3;
    
    atribui(&p3);
    
    printf("x = %d\n", p3.x);
    printf("y = %d\n", p3.y);
    
    return 0;
}
