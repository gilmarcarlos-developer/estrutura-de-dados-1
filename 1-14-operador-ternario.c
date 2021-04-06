#include <stdio.h>

int main(){
    
    //exemplo de if
    int x = 0, y = 0;
    if(x == 0){
        x = 10;
        printf("%i\n", x);
    }else{
        x = 20;
        printf("%i\n", x);
    }
    if(y == 1){
        y = 10;
        printf("%i\n", y);
    }else{
        y = 20;
        printf("%i\n", y);
    }
    
    //operador ternário
    int a = 0, b = 0;
    
    a = (a == 0) ? 10 : 20;
    printf("%i\n", a);
    
    b = (b == 1) ? 10 : 20;
    printf("%i\n", b);
    
    return 0;
}
