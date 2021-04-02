#include <stdio.h>

//função fica fora do main (pode ser antes ou depois do main)
int calcula_quadrado(int num){
    //pode ter mais de um return na função (tipo em um if, um return dá um resultado e o outro dá outro)
    return num * num;
}

int main(){
    int n1;
    scanf("%d", &n1);
    
    //aqui está chamando a função e atribuindo o resultado da função na variavel "quad"
    int quad = calcula_quadrado(n1);
    
    printf("%d\n", quad);
    
    return 0;
}
