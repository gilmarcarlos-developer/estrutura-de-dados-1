#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define qt 4

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(){
    // cadastro de usuário com struct
    
    // podemos declarar assim
    struct pessoa p1, p2, p3, p4;
    // ou assim
    struct pessoa p[qt];
    
    //atribuir valor a variável
    p[0].idade = 31;
    strcpy.(p[1].nome, "Eduardo");
    
    p[2].numero = p[0].numero - 1;
    
    //como ler os dados usando for
    for(int x = 0; x < qt; x++){
        fgets(p[x].nome);
        scanf(("%d", &p[x].idade);
        fgets(p[x].rua);
        scanf("%d", &p[x].numero);
    }
    
    return 0;
}
