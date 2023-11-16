// Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <stdlib.h>

void inc(int* a){
    *a += 1;
}


int main(){
    int b;

    printf("insira b: ");
    scanf("%d", &b);

    inc(&b);
    printf("b: %d\n\n", b);
    return 0;
}