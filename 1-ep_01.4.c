#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1 = 0, num2 = 0, aux = 0;
    int primo = 0, qt_primo = 0;
    
    printf("Digite dois numeros: ");
    scanf("%i", &num1);
    scanf("%i", &num2);
    aux = num1;
    
    for(num1; num1 <= num2; num1++){
        for(int y = 2; y < num1; y++){
            if(num1 % y == 0){
                primo++;
            }
        }
        if(primo == 0){
            //printf("%d ", num1);
            qt_primo++;
        }
        primo = 0;
    }
   
    printf("Existem %i numeros primos entre %i e %i\n", qt_primo, aux, num2);

    return 0;
}
