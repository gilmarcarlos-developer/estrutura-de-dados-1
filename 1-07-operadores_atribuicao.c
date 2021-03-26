#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0, y = 0, z = 0;

    //x = x + 1; é igual ao de baixo
    x += 1;
    // que também é igual a
    x++;
    
    while(y < 6){
        printf("msg1\n");
        y += 1;
    }
    
    while(z < 6){
        printf("msg2\n");
        z++;
    }
    
    int a = 50;
    printf("%i soma\n", a+=100);
    printf("%i subtração\n", a-=40);
    printf("%i multiplicação\n", a*=3);
    printf("%i divisão\n", a/=2);
    printf("%i resto\n", a%=3);
    return 0;
}

/* atribuidores que temos
 * += soma
 * -= subtração
 * *= multiplicação
 * /= divisão
 * %= resto da divisão
 */
