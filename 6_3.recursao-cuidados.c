#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if (n == 0) // aqui tá o critério de parada
        return 1;
    else // e aqui o parametro da chamada recursiva
        return n * fatorial(n-1);
}

//esse exemplo é extremamente lento pra calcular o próximo termo, e gasta muita memória, então nem todos os problemas são bons resolver com recursão
//aqui ele chama a função duas vezes, então demora muito pra resolver pq repete muito comando lá dentro
int fibonacci(int n){
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    
    /*
    durante a implementação de uma função recursiva, temos que ter em mente duas coisas:
        * critério de parada da função:
            determina quando a função deve parar de chamar a si mesma
        * parametro da chamada recursiva:
            devemos sempre mudar o valor do parametro passado, de forma que a recursão chegue a um término (chegue ao critério de parada)
    */
    
    int x = fatorial(5);
    printf("fatorial de 5: %d\n", x);
    
    return 0;
}
