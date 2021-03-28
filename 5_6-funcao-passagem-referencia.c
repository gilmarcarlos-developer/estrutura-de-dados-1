#include <stdio.h>
#include <stdlib.h>

//passagem por valor
void soma_mais_um1(int n){
    n = n + 1;
    printf("Dentro da funcao por valor: x = %d\n", n);
}
//passagem por referencia
void soma_mais_um2(int *n){
    *n = *n + 1;
    //tem que ter * TODA VEZ que digitar a variavel que estiver sendo usada por referencia
    printf("Dentro da funcao por referencia: x = %d\n", *n);
}

int main(){
    
    /*
    passagem "por referência": é passado para a função o endereço de onde o dado está armazenado na memória
    
    assim, a função pode modificador o valor do parametro
    */
    
    /*
    parametro por refência: usa-se o operador "*" na frente do nome do parametro durante a declaração da função
    
    por valor é assim
        void soma_mais_um(int n);
    por referência é assim
        void soma_mais_um(int *n);
    */
    int x = 5;
    printf("Antes de chamar a funcao: x = %d\n", x);
    soma_mais_um1(x);
    printf("Depois da funcao por valor: x = %d\n", x);
    //não pode esquecer do &
    soma_mais_um2(&x);
    printf("Depois da funcao por referencia: x = %d\n", x);
    
    return 0;
}
