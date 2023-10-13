// Guilherme Carvalho Torres 11202021966

#include <stdio.h>

void le_matriz(int matriz[100][100], int n_matriz, int m_matriz){
    int i, j;

    printf("digite os valores da matriz:\n");
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

void troca_linha(int matriz[100][100], int matriz_trocada[100][100], int n, int m, int i, int j){
    int p, q;

    for(p=0; p<n; p++)
        for(q=0; q<m; q++){
            if(p == i)
                matriz_trocada[p][q] = matriz[j][q];
            else if(p == j)
                matriz_trocada[p][q] = matriz[i][q];
            else
                matriz_trocada[p][q] = matriz[p][q];
            }
}

int main(){
    int i, j, n, m;
    int matriz_1[100][100], matriz_trocada[100][100];

    printf("digite o numero de linhas das matrizes: ");
    scanf("%d", &n);
    printf("digite o numero de colunas das matrizes: ");
    scanf("%d", &m);

    le_matriz(matriz_1, n, m);
    print_matriz(matriz_1, n, m);

    printf("digite um numero i >= 0: ");
    scanf("%d", &i);
    printf("digite um numero j <= %d: ", n-1);
    scanf("%d", &j);

    troca_linha(matriz_1, matriz_trocada, n, m, i, j);
    print_matriz(matriz_trocada, n, m);

    return 0;
}