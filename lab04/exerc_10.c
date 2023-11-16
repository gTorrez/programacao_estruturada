// Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <stdlib.h>


int** le_matriz(int n_linhas, int m_colunas){
    int i, j;
    int** M;

    M = malloc(n_linhas * sizeof(int*));

    for(i=0; i<n_linhas; i++)
        M[i] = malloc(m_colunas * sizeof(int));

    printf("Insira os valores da matriz: \n");
    for(i=0; i<n_linhas; i++)
        for(j=0; j<m_colunas; j++)
            scanf("%d", &M[i][j]);
    printf("\n");

    return M;
}

void matriz_print(int** M, int n, int m){
    int i, j;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }
    printf("\n");
}


int main(){
    int i, linhas, colunas;
    int** matriz;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    matriz = le_matriz(linhas, colunas);

    matriz_print(matriz, linhas, colunas);

    for(i=0; i<linhas; i++)
        free(matriz[i]);
    free(matriz);

    return 0;
}