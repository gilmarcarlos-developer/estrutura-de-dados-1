#include <stdio.h>
#include <stdlib.h>

int somatorio(int n){
    if(n == 1) //critério de parada
        return 1;
    else //parametro da chamada recursiva
        return n + somatorio(n-1);
}

int main(){
    
    /*
    crie uma função recursiva que calcule o somatório de 1 até n
        * soma(4) = 1 + 2 + 3 + 4
        * soma(3) = 1 + 2 + 3
        * etc
    */
    
    int n = 0;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    
    int x = somatorio(n);
    
    printf("O somatorio de %d é = %d\n", n, x);
    
    return 0;
}
