#include <stdio.h>
#include <stdlib.h>


int** cartesiano(int v1[], int n1, int v2[], int n2){
    int i, j, k, n_linhas, n_colunas;
    int** produto;

    n_linhas = n1*n2;
    n_colunas = 2;
    produto = malloc(n_linhas * sizeof(int*));

    for(i=0; i<n_linhas; i++)
        produto[i] = malloc(n_colunas * sizeof(int));

    k = 0;
    for(i=0; i<n1; i++){  
        for(j=0; j<n2; j++){
            produto[k][0] = v1[i];
            produto[k][1] = v2[j];
            k += 1;
        }
    }

    return produto;  
}


int* le_array(int len){
    int i;
    int* input;

    input = malloc(len * sizeof(int));
    
    printf("valores do vetor: ");
    for(i=0; i<len; i++)
        scanf("%d", &input[i]);

    return input;
}


int main(){
    int i, j, m, n;
    int* vetor_1;
    int* vetor_2;
    int** res;

    printf("digite tamanho do vetor_1: ");
    scanf("%d", &m);
    vetor_1 = le_array(m);

    printf("digite tamanho do vetor_2: ");
    scanf("%d", &n);
    vetor_2 = le_array(n);

    res = cartesiano(vetor_1, m, vetor_2, n);

    printf("[");
    for(i=0; i<n*m; i++){
        printf("(%d, %d)", res[i][0], res[i][1]);
    }
    printf("]");
    printf("\n");

    free(vetor_1);
    free(vetor_2);
    
    for(i=0; i<m*n; i++)
        free(res[i]);
    free(res);

    return 0;
}