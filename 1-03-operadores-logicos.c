#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // conectivo de ligação &&, significa "e"
    //atribui para a variavel uma condição, se for verdadeiro mostrar 1, se false mostra 0
    int i = 40;
    int condicao = (i>20) && (i<100);
    printf("%i\n", condicao);
    
    // conectivo de ligação ||, significa "ou"
    // no minimo uma das sentenças precisa ser verdeira
    int x = 10;
    int cond = 0;
    
    cond = (x==10) || (x<1);
    printf("%i\n", cond);
    
    cond = (x==3) || (x<3);
    printf("%i\n", cond);
    
    
    return 0;
}
