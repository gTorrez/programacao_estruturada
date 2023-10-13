// Guilherme Carvalho Torres 11202021966
#include <stdio.h>

int main(){
    int num_user, i;

    printf("Digite um numero para fechar o intervalo [0, n].\n");
    scanf("%d", &num_user);

    printf("Os numeros pares no intervalo [0, %d] sao:\n", num_user);
    for(i=0; i<num_user+1; i++)
        if(i % 2 == 0)
            printf("%d\n", i);

    return 0;
}