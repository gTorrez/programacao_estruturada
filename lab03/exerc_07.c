#include <stdio.h>

#define MAX 100

typedef struct {
    int elemento[MAX][MAX];
    int n;
}Matriz;


Matriz matriz_le(int n){
    int i, j;

    Matriz X;
    X.n = n;

    printf("Digite os valores da matriz:\n");
    for(i=0; i<X.n; i++)
        for(j=0; j<X.n; j++)
            scanf("%d", &X.elemento[i][j]);

    return X;
}


Matriz matriz_multiplica(Matriz A, Matriz B){
    int i, j, k;

    Matriz AB;
    AB.n = A.n;

    for(i=0; i<AB.n; i++)
        for(j=0; j<AB.n; j++)
            for(k=0; k<AB.n; k++)
                AB.elemento[i][j] += A.elemento[i][k]*B.elemento[k][j];

    return AB;
}


void print_matriz(Matriz X){
    int i, j;

    for(i=0; i<X.n; i++){
        for(j=0; j<X.n; j++)
            printf("%d ", X.elemento[i][j]);
        printf("\n");
    }
}


int main(){
    int i, j, n;

    printf("Insira a dimensao da matriz n x n: ");
    scanf("%d", &n);

    Matriz A = matriz_le(n);
    Matriz B = matriz_le(n);
    Matriz AB = matriz_multiplica(A, B);

    printf("================\n");
    print_matriz(A);
    printf("================\n");
    print_matriz(B);
    printf("================\n");
    print_matriz(AB);
    

    return 0;
}