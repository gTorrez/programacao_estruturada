#include <stdio.h>
#include <stdlib.h>


int soma(int v[], int n){
    if(n == 0)
        return 0;
    
    else
        return v[n-1] + soma(v, n-1);
}

int main(){
    int i, len, res;
    int *vetor;

    printf("digite a quantidade de elementos: ");
    scanf("%d", &len);

    vetor = malloc(len * sizeof(int));

    for(i=0; i<len; i++)
        scanf("%d", &vetor[i]);

    res = soma(vetor, len);
    printf("soma = %d\n", res);

    return 0;
}