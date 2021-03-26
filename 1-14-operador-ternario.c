#include <stdio.h>

int main(){
    
    //funciona igual o if mas com menos linha de código
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
    // <variavel> = (condição) ? <valor1> : <valor2>;
    // o sinal : significa "senão"
    int a = 0, b = 0;
    a = (a == 0) ? 10 : 20;
    printf("%i\n", a);
    
    b = (b == 1) ? 10 : 20;
    printf("%i\n", b);
    
    //posso colocar mais condições "senao", é só acrescente dois ponto :
    
    return 0;
}
