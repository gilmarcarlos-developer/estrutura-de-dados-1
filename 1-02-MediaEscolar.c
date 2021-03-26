#include <stdio.h>
#include <stdlib.h>

int main(){
 
    float nota1, nota2, nota3, nota4, media;    
    nota1 = nota2 = nota3 = nota4 = media = 0;
    
    printf("\t=== Media escolar 1.0===\n");
    
    printf("Digite a sua primeira nota: ");
        scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
        scanf("%f", &nota2);
    printf("Digite a sua terceira nota: ");
        scanf("%f", &nota3);
    printf("Digite a sua quarta nota: ");
        scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    printf("\nSua media escolar foi de: %f", media);
    
    if(media >= 7){
        printf("\nVoce foi aprovado!");
    }else{
        printf("\nVoce foi reprovado!");
    }
    
    return 0;

}
