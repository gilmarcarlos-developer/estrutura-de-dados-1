#include <stdio.h>

/*Implemente um programa que lê um inteiro positivo n, e verifique se n é igual ao produto de 3 números inteiros consecutivos.
Por exemplo, 120 atende ao critério, pois 4x5x6 = 120. Se atender, imprima "SIM", caso contrário, imprima "NAO" (e coloque uma quebra de linha depois).
*/
int main(){
    
    int n, aux = 0, verif;

    scanf("%d", &n);
    verif = n-1;

    for(int x = 1; x < x+3 && verif < n; x++){
        verif = x * (x+1) * (x+2);
        if(verif == n)
            aux++;
    }

    if(aux == 1)
        printf("SIM\n");
    else
        printf("NÃO\n");
    
    return 0;
}
