#include <stdio.h>
#include <stdlib.h>

#define tam 4

int main(){

    float notas[tam];
    float total = 0, media = 0;

    printf("\t=== Media escolar 2.0===\n");

    for(int x = 0; x < tam; x++){
        printf("Digite sua %iª nota: ", x+1);
        scanf("%f", &notas[x]);

        total+= notas[x];
    }

    media = total / tam;

    printf("\nSua media escolar foi de: %.2f", media);

    if(media >= 7){
        printf("\nVoce foi aprovado!\n");
    }else{
        printf("\nVoce foi reprovado!\n");
    }

    return 0;
}