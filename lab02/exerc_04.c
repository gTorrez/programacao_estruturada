// Guilherme Carvalho Torres 11202021966
#include <stdio.h>

void le_matriz(int matriz[100][100], int n_matriz, int m_matriz){
    int i, j;

    printf("Digite os valores da matriz:\n");
    for(i=0; i<n_matriz; i++)
        for(j=0; j<m_matriz; j++)
            scanf("%d", &matriz[i][j]);
}

void print_matriz(int matriz[100][100], int n, int m){
    int i, j;

    printf("=====\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            printf("%d ", matriz[i][j]);

        printf("\n");
    }
}

void soma_matriz(int matriz_a[100][100], int matriz_b[100][100], int matriz_c[100][100], int n, int m){
    int i, j;

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
}


int main(){
    int n, m;
    int matriz_1[100][100], matriz_2[100][100], matriz_res[100][100];

    printf("Digite o numero de linhas das matrizes: ");
    scanf("%d", &n);
    printf("Digite o numero de colunas das matrizes: ");
    scanf("%d", &m);

    le_matriz(matriz_1, n, m);
    le_matriz(matriz_2, n, m);

    print_matriz(matriz_1, n, m);
    print_matriz(matriz_2, n, m);

    soma_matriz(matriz_1, matriz_2, matriz_res, n, m);
    print_matriz(matriz_res, n, m);

    return 0;
}