#include <stdio.h>


int hanoi(int inicio, int aux, int final, int qtd){
    int n = 0;

    if(qtd == 1)
        return 1;
    
    n += hanoi(inicio, final, aux, qtd-1);
    n += hanoi(aux, inicio, final, qtd-1);
    n += 1;
    return n;
}



int main(){
    int qtd_movs;
    int n;

    printf("Digite a quantidade de discos: ");
    scanf("%d", &n);

    qtd_movs = hanoi(0, 1, 2, n);
    
    printf("%d", qtd_movs);
    return 0;
}