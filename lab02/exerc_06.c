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


void transposta(int matriz[100][100], int m_transposta[100][100], int n, int m){
    int i, j;

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            m_transposta[i][j] = matriz[j][i];
        }
    }
}


int verifica_simetria(int matriz_a[100][100], int matriz_t[100][100], int n, int m){
    int i, j;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(matriz_a[i][j] != matriz_t[i][j])
                return -1;
        }
    }
    
    return 0;
}


int main(){
    int i, j, n, m, simetria;
    int matriz_1[100][100], matriz_transposta[100][100];

    printf("digite o numero de linhas das matrizes: ");
    scanf("%d", &n);
    printf("digite o numero de colunas das matrizes: ");
    scanf("%d", &m);

    le_matriz(matriz_1, n, m);
    print_matriz(matriz_1, n, m);
    transposta(matriz_1, matriz_transposta, n, m);
    print_matriz(matriz_transposta, m, n);

    simetria = verifica_simetria(matriz_1, matriz_transposta, n, m);

    if(simetria != 0)
        printf("A matriz nao e simetrica");
    else
        printf("A matriz e simetrica");
    
    return 0;
}