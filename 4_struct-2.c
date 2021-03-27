#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main{
    
    //---------------------------
    struct pessoa p1, p2;
    
    //inicializando uma estrutura
    strcpy(p1.nome, "Ricardo");
    strcpy(p1.rua, "Rua 1");
    p1.idade = 31;
    p1.numero = 101;
    
    strcpy(p2.nome, "Fernanda");
    strcpy(p2.rua, "Rua 5");
    p2.idade = 24;
    p2.numero = 541;
    
    //---------------------------
    
    //podemos fazer assim:
    //TEM QUE ESTAR NA ORDEM CERTA
    struct pessoa p3 = {"Fernando", "Rua 2", 38, 304};
    
    //---------------------------
    
    //atribuição entre estruturas
    struct pessoa p4 = {"Marcelo", "Rua 9", 34, 94};
    struct pessoa p5;
    
    //se for só uma variável, fazer assim
    //string
    strcpy(p4.nome, p5.nome);
    strcpy(p4.rua, p5.rua);
    //int
    p4.idade = p5.idade;
    p4.numero = p5.numero;
    
    //se for a struct inteira de uma vez só, podemos fazer assim
    p5 = p4;
    
    //---------------------------
    
    return 0;
}
