#include <stdio.h>
#include <stdlib.h>

//função do tipo void não tem return
void imprime(int n){
    for(int x = 1; x <= n; x++){
        printf("Linha %d\n", x);
    }
}

//funções que não sejam do tipo void devem SEMPRE retornar um valor
int soma(int x, int y){
    return x + y;
}

//uma função pode ter mais de um comando return
int maior(int x, int y){
    if(x > y)
        return x;
    else
        return y;
    
    //ps: quando o comando return é executado, a função termina, então prestar atenção. então esse printf NUNCA será executado nesse exemplo
    printf("Fim da função\n");
}

int main(){
    
    /*
    retorno da função: é como uma função devolve o seu resultado (se ele existir) para quem a chamou
      
    forma geral:
         tipo nome_função(parametros){
             conjunto de declarações
             comandos
             
             return expressão;
         }
         
    tipo de retorno pode ser: int, char, float, double, void, strutc e ponteiros
        * array apenas pode ser retornado se ele estiver DENTRO de um struct
    */
    
    //exemplo void
    imprime(5);
    
    printf("\n");
    
    //exemplo int
    int x = soma(4, 6);
    printf("x = %d\n", x);
    //posso chamar direto no printf
    printf("soma 2+3 = %d\n", soma(2,3));
    
    printf("\n");
        
    //-----
    int z = maior(4, 5);
    printf("Maior = %d\n", z);
    
    return 0;
}
