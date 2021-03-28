#include <stdio.h>
#include <stdlib.h>

//função retorna o resultado de a * a
int quadrado(int a){
    return a * a;
}

int main(){
    
    /* função: conjunto de comandos que recebe um nome e pode ser chamada em alguma parte do programa
    vantagens: estruturação do programa e reutilização de código
    scanf e printf são um exemplo disso
    
    
    forma geral:
        tipo <nome_função>(parametros){
            conjunto de declarações e comandos
        }   
    */
    
    int x, y;
    printf("Digite x: ");
    scanf("%d", &x);
    
    //chama a função quadrado mandando x como parametro, ai realiza a operação que está dentro da função e retorna o resultado para a variável y
    y = quadrado(x);
    
    printf("y = %d\n", y);
    
    return 0;
}
