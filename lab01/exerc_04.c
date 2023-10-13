// Guilherme Carvalho Torres 11202021966
#include <stdio.h>


void produto_hadamard(float u[], float v[], float resultado[], int len){
    int i;
    
    for(i=0; i<len; i++)
        resultado[i] = u[i] * v[i];

    for(i=0; i<len; i++)
        printf("%.2f\n", resultado[i]);
}


int main(){
    int i, len;
    float vetor_1[100], vetor_2[100], res[100];

    printf("digite o tamanho dos vetores entre 1 e 100\n");
    scanf("%d", &len);

    printf("digite os elementos do vetor u\n");
    for(i=0; i<len; i++)
        scanf("%f", &vetor_1[i]);

    printf("digite os elementos do vetor v\n");
    for(i=0; i<len; i++)
        scanf("%f", &vetor_2[i]);

    produto_hadamard(vetor_1, vetor_2, res, len);

    return 0;
}


