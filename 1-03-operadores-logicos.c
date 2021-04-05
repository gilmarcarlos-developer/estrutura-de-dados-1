#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i = 40;
    int condicao = (i>20) && (i<100);
    printf("%i\n", condicao);
    
    int x = 10;
    int cond = 0;
    
    cond = (x==10) || (x<1);
    printf("%i\n", cond);
    
    cond = (x==3) || (x<3);
    printf("%i\n", cond);
    
    return 0;
}
