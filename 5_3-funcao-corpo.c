#include <stdio.h>
#include <stdlib.h>

//função calcula fatorial
int fatorial(int n){
    int f = 1;
    for(int i = 1; i <= n; i++){
        f = f * i;
    }
    //retorna o valor da variavel f
    return f;
}

int main(){
    
    /* corpo da função:
     processa as entradas (parametros), e gera a saída (return) da função.
     é formado por declarações e comando
    */
    
    //------ modelo sem função
    int n, f = 1;
    printf("Digite n: ");
    scanf("%d", &n);
    
    for(int x = 1; x <= n; x++){
        f = f * x;
    }
    
    printf("fatorial de %d = %d\n", n, f);
    printf("\n");
    //-------
    
    // mesmo modelo mas utilizando função
    int x, y;
    printf("Digite n: ");
    scanf("%d", &x);
    
    //chama a função e retorna o resultado para a variável y
    y = fatorial(x);
    
    printf("fatorial de %d = %d\n", x, y);
    //-------
    
    return 0;
}
