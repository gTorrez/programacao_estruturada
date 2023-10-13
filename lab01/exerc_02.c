// Guilherme Carvalho Torres 11202021966
#include <stdio.h>

int main(){
    int num_user, i, j, n_div, checa_primo;

    checa_primo = 0;

    printf("Digite um numero para fechar o intervalo [1, n].\n");
    scanf("%d", &num_user);

    printf("Os numeros primos no intervalo [1, %d] sao:\n", num_user);
    for(i=1; i<num_user; i++){
        for(j=1; j<=i; j++)
            if(i % j == 0)
                checa_primo += 1;
    
        if(checa_primo == 2)
            printf("%d\n", i);
            checa_primo = 0;
    }

    return 0;
}