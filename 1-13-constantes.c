#include <stdio.h>
#include <stdlib.h>

//outro jeito de declarar uma constante
#define x 7

int main(){

    //assim se declara uma constante
    //nao dá pra alterar o valor da constante
    const int a = 5;
    printf("%i\n", a);
    
    printf("%i\n", x);
    
    return 0;
}
