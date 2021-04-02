#include <stdio.h>

int main(){
 
    int idades[10];
    int soma = 0, media = 0, qt_acima_media = 0;
    
    for(int x = 0; x < 10; x++){
        scanf("%i", &idades[x]);
        
        soma = soma + idades[x];
    }
    
    media = soma / 10;
    
    for(int x = 0; x < 10; x++){
        
        if(idades[x] > media){
            qt_acima_media++;
        }
    }
    
    printf("\nA media de idade eh %i\nExistem %i pessoa(s) acima da idade media", media, qt_acima_media);
    
    return 0;
}
