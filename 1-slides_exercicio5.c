#include <stdio.h>

int soma(int num1, int num2, int num3){
    return num1 + num2 + num3;
}
int multiplicacao(int num1, int num2){
    return num1 * num2;
}

int main(){
    int op = 1;
    int a, b, c;
    
    while(op != 0){
        a = b = c = 0;
        printf("\nDigite a opcao desejada: \n1- soma dois numeros \n2- soma tres numeros \n3- multiplicacao de dois numeros \n0- sair\n");
        scanf("%i", &op);
    
        if(op == 1){
            printf("\nVoce escolheu soma de dois numeros, digite dois numeros: \n");
            scanf("%i", &a);
            scanf("%i", &b);
            
            printf("A soma de %i + %i = %i\n", a, b, soma(a, b, c));        
        }else if (op == 2){
            printf("\nVoce escolheu soma de tres numeros, digite tres numeros: \n");
            scanf("%i", &a);
            scanf("%i", &b);
            scanf("%i", &c);

            printf("A soma de %i + %i + %i = %i\n", a, b, c, soma(a, b, c));    
        }else if(op == 3){
            printf("\nVoce escolheu multiplicacao de dois numeros, digite dois numeros: \n");
            scanf("%i", &a);
            scanf("%i", &b);
            
            printf("A multiplicacao de %i * %i = %i\n", a, b, multiplicacao(a, b));
            
        }else if(op == 0){
            printf("\nVoce escolheu sair,\nFim do programa!\n");
            
        }else{
            printf("\nOpcao invalida!\n");
        }
    }
    return 0;   
}
