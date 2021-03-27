#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ALINHAMENTO DE ESTRUTURAS

struct endereco{
    char rua[50];
    int numero;
};

struct pessoa{
    char nome[50];
    int idade;
    //ender é a variável
    struct endereco ender;
};

int main(){
    
    //acessando a variável
    struct pessoa p;
    p.idade = 31;
    p.ender.numero = 101;
    
    
    return 0;
}
