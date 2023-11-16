// Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <stdlib.h>


void swap(int* a, int* b){
    int aux = *b;
    *b = *a;
    *a = aux;
}


int main(){
    int valor_1, valor_2;

    printf("Insira a: ");
    scanf("%d", &valor_1);

    printf("Insira b: ");
    scanf("%d", &valor_2);

    swap(&valor_1, &valor_2);

    printf("\na: %d", valor_1);
    printf("\nb: %d", valor_2);
    printf("\n\n");

    return 0;
}