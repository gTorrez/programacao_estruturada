// Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <stdlib.h>


void swap(int** p1, int** p2){
    int* aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}



int main(){
    int i, n, m;
    int* a;
    int* b;

    printf("digite tamanho do vetor a: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));

    printf("Digite %d valores: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("\n");

    printf("digite tamanho do vetor b: ");
    scanf("%d", &m);
    b = malloc(m * sizeof(int));

    printf("Digite %d valores: ", m);
    for(i=0; i<m; i++){
       scanf("%d", &b[i]);
    }

    swap(&a, &b);

    for(i=0; i<m; i++)
        printf("a[%d]: %d\n", i, a[i]);

    printf("\n\n");

    for(i=0; i<n; i++)
        printf("b[%d]: %d\n", i, b[i]);
    
    free(a);
    free(b);

    return 0;
}