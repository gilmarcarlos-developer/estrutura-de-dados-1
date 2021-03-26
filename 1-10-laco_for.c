#include <stdio.h>
#include <stdlib.h>

int main(){

    for(int i = 0; i < 10; i++){
        printf("%i\n", i);
    }

    for(int a = 0, b = 10; a <= 10; a++, b--){
        printf("%i - %i\n", a, b);
    }
    return 0;
}
