#include <stdio.h>
#include <stdlib.h>

/* forma geral:
* 
* enum nome_enum { lista_de_identificador };
* 
*/
    
//enum significa enumeração

enum semana { Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado };

int main(){
    
    //declaração
    enum semana s1, s2, s3;
    //atribuição
    s1 = Segunda; //1 (posição que está definido; sempre começa no 0)
    
    printf("Valor = %d\n", s1);
    
    s2 = Terca; //2
    
    s3 = s1 + s2;
    printf("Domingo = %d\n", Domingo); //0
    printf("s1 = %d\n", s1);
    printf("s2 = %d\n", s2);
    printf("s3 = s1+s2 = %d\n", s3);
    
    if (s3 == Quarta)
        printf("s3 igual a Quarta\n");
    
    return 0;
}
