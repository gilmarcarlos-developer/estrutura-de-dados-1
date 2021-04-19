#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(){
         
    //declaração de uma variável struct
    struct pessoa p;
       
    //cada campo (variável) da struct pode ser acessada usando o operador "." (ponto)
    p.idade = 31; //comando de atribuição
    
    fgets(p.nome, 50, stdin);
    
    scanf("%d", &p.numero); //leitura do numero
    
    p.numero = p.numero + p.idade - 100; //usando as variáveis para fazer uma operação
    
    printf("Nome: %s", p.nome);
    printf("Idade: %i anos\n", p.idade);
    printf("Numero: %i\n", p.numero);
    
    return 0;
}
