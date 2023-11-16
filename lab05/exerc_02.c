#include <stdio.h>


void count_up(int n){
    if(n == 0){
        printf("0\n");
        return;
    }
    else
        count_up(n-1);

    printf("%d\n", n);
}

int main(){
    int count;

    printf("digite um valor inteiro para a contagem progressiva: ");
    scanf("%d", &count);

    count_up(count);
    return 0;
}