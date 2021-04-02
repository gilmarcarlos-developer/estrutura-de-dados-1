#include <stdio.h>

//função
void muda_valor(int parametro){
    parametro = 507;
    
    printf("%d\n", parametro);
}

int main(){
    int n = 200;
    
    //primeiro ele chama a funcao, altera o valor e imprime o novo valor
    muda_valor(n);
    //depois volta pra cá e imprime o valor da variável n
    printf("%d\n", n);
    
    //a função apenas mudou o valor lá em cima, ele não altera a variavel daqui
    
    return 0;
}
