#include <stdio.h>

int main(){

    int op = 0;
    int a = 0, b = 0, c = 0;
    int soma_dois = 0, soma_tres = 0, multiplica = 0;
    int menor = 0, aux = 0;
    
    do{
        
        printf("\nEscolha uma das opções: \n1: soma dois numeros \n2: soma tres numeros \n3: multiplicacao de dois numeros: \n0: sair\n");
        scanf("%i", &op);
        
        if(op == 1){
            printf("Digite dois numeros: ");
            scanf("%i", &a);
            scanf("%i", &b);
            
            soma_dois = a+b;
            printf("= %i\n", soma_dois);
            
            if(aux == 0){
                menor = soma_dois;
            }else{
                if(soma_dois < menor){
                    menor = soma_dois;
                }
            }   
        }else if(op == 2){
            printf("Digite tres numeros: ");
            scanf("%i", &a);
            scanf("%i", &b);
            scanf("%i", &c);
            
            soma_tres = a+b+c;
            printf("= %i\n", soma_tres);
            
            if(aux == 0){
                menor = soma_tres;
            }else{
                if(soma_tres < menor){
                    menor = soma_tres;
                }
            }   
        }else if(op == 3){
            printf("Digite dois numeros: ");
            scanf("%i", &a);
            scanf("%i", &b);
            
            multiplica = a*b;
            printf("= %i\n", multiplica);
            
            if(aux == 0){
                menor = multiplica;
            }else{
                if(multiplica < menor){
                    menor = multiplica;
                }
            }   
        }
        
        aux++;
        
    }while(op != 0);
    
    printf("%i", menor);
    printf("\nSair!\n");
    
    return 0;
}
