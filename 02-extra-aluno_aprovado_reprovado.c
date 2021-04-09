#include <stdio.h>

int main(){
    float notas[4];
    float total = 0, media = 0;

    printf("Digite as 4 notas: \n");
    for(int x = 0; x < 4; x++){
        scanf("%f", &notas[x]);
        total = total + notas[x];
    }
    media = total / 4;

    if(media < 5)
        printf("Reprovado, conceito F! %.2f\n", media);
    else if(media >= 5 && media < 6)
        printf("Aprovado, conceito E! %.2f\n", media);
    else if(media >= 6 && media < 7)
        printf("Aprovado, conceito D! %.2f\n", media);
    else if(media >= 7 && media < 8)
        printf("Aprovado, conceito C! %.2f\n", media);        
    else if(media >= 8 && media < 9)
        printf("Aprovado, conceito B! %.2f\n", media);
    else
        printf("Aprovado, conceito A! %.2f\n", media);

    return 0;
}