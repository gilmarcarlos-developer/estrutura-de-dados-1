#include <stdio.h>

int main(){
 
    int op = 1;
    int a = 0, b = 0, c = 0, resultado = 0;
    
    //menu
    while(op != 0){
    printf("\nDigite a opcao desejada: \n1- soma dois numeros \n2- soma tres numeros \n3- multiplicacao de dois numeros \n0- sair\n");
    scanf("%i", &op);
    
        //opção 1
        if(op == 1){
            printf("\nVoce escolheu soma de dois numeros, digite dois numeros: ");
            scanf("%i %i", &a, &b);
            
            resultado = a + b;
            printf("A soma de %i + %i = %i\n", a, b, resultado);
        
        //opção 2
        }else if (op == 2){
            printf("\nVoce escolheu soma de tres numeros, digite tres numeros: ");
            scanf("%i %i %i", &a, &b, &c);
            
            resultado = a + b + c;
            printf("A soma de %i + %i + %i = %i\n", a, b, c, resultado);    
            
        //opção 3
        }else if(op == 3){
            printf("\nVoce escolheu multiplicacao de dois numeros, digite dois numeros: ");
            scanf("%i %i", &a, &b);
            
            resultado = a * b;
            printf("A multiplicacao de %i * %i = %i\n", a, b, resultado);
            
        }else if(op == 0){
            printf("\nVoce escolheu sair,\nFim do programa!\n");
            
        }else{
            printf("\nOpcao invalida!\n");
        }
    }
    
    return 0;
    
}
