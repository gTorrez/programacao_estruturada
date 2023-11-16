#include <stdio.h>


void count_down(int n){
    if(n == 0){
        printf("ACABOU!");
        return;
    }
    else{
        printf("%d\n", n);
        return count_down(n-1);
    }
}  


int main(){
    int count;

    printf("digite um valor inteiro para a contagem regressiva: ");
    scanf("%d", &count);

    count_down(count);
    return 0;
}