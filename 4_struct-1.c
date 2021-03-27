/* tipos de variáveis que podemos declarar
    * tipos básicos: char, int, float, double
    * tipos compostos homogêneos: array
* 
* a linguagem C nos permite também criar nossos próprios tipos de variáveis.
* um deles é a struct também chamada de Estrutura
*
* forma geral: 
* struct <nome> {
   *  tipo1 nome1;
   *  tipo2 nome2;
* };
*
*/

#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(){
         
    //declaração de uma variável struct
    //dentro dessa variável 'p' eu tenho todas as informação da struct
    struct pessoa p;
    
    //posso ter um struct de mais de uma pessoa
    //struct pessoa p1, p2, p3;
    
    //cada campo (variável) da struct pode ser acessada usando o operador "." (ponto)
    p.idade = 31; //comando de atribuição
    
    fgets(p.nome, 50, stdin);
    
    scanf("%d", &p.numero); //leitura do numero
    
    p.numero = p.numero + p.idade - 100;
    
    printf("Nome: %s", p.nome);
    printf("Idade: %i anos\n", p.idade);
    printf("Numero: %i\n", p.numero);
    
    return 0;
}
