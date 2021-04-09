#include <stdio.h>
#include <stdlib.h>

#define const_Nota 10

int main(){
    
    int notas[10];
    for(int x = 0; x < 10; x++)
        scanf("%i", &notas[x]);
    
    for(int x = 0;  x < 10; x++)
        printf("%i\n", notas[x]);
        
    int notas[const_Nota];
    for(int x = 0; x < const_Nota; x++)
        scanf("%i", &notas[x]);
    
    for(int x = 0; x < const_Nota; x++)
        printf("%i\n", notas[x]);
        
    return 0;
}
