#include <stdio.h>
#include <stdlib.h>

//funcao simples
void imprime(int n){
    for(int x = 1; x <= n; x++){
        printf("Linha %d\n", x);
    }
}

//funcao recursiva
int fatorial(int n){
    //n = 5 (foi o valor enviado lá na chamada da função
    
    //n não é igual a 0, então vai pro else
    if(n == 0)
        return 1;
    else
        //aqui faz n * o resultado da função que foi chamada novamente
        //na primeira vez ele fica fatorial(5 - 1)
        //na segunda vez fatorial(4 - 1)
        //e assim por diante
        //quando o n chegar a zero, ele faz o caminho inverso retornando o resultado de cada n*fatorial(n-1)
        return n * fatorial(n - 1);
}

//----
//como esvaziar um vaso contendo 3 flores?
void esvaziarVaso(int flores){
    if(flores > 0){
        //remove uma flores
        esvaziarVaso(flores - 1);
    }
}

int main(){
    
    //programa com funcao simples
    imprime(5);
    printf("\n");
    
    //----
    //programa com funcao recursiva
    int x = fatorial(5);
    printf("fatorial de 5: %d\n", x);
    
    
    return 0;
}
