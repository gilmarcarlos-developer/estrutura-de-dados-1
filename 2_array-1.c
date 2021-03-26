#include <stdio.h>
#include <stdlib.h>

#define const_Nota 10

int main(){

    //array: conjunto de variáveis do mesmo tipo usando o mesmo nome
    //forma geral: <tipo> <nome>[tamanho];
    
    //então para guardar a nota de 10 alunos
    //tem 10 posições, mas todo array começa no indice 0 e termina no numero antes do definido, por exemplo: 10 posições, inicia em 0 e vai até 9
    int notas[10];
    
    //para ler essas variaveis
    for(int x = 0; x < 10; x++){
        scanf("%i", &notas[x]);
    }
    
    //para exibir
    for(int x = 0;  x < 10; x++){
        printf("%i\n", notas[x]);
    }
        
    //também posso fazer assim (declarei a constante lá em cima
    int notas[const_Nota];
    
    for(int x = 0; x < const_Nota; x++)
        scanf("%i", &notas[x]);
    
    for(int x = 0; x < const_Nota; x++)
        printf("%i\n", notas[x]);
        
        
    return 0;
}
