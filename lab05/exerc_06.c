#include <stdio.h>


void collatz(int num){
    if(num == 1){
        printf("%d", num);
        return;
    }

    else if(num % 2 == 0){
        printf("%d ", num);
        return(collatz(num/2));
    }

    else{
        printf("%d ", num);
        return(collatz((3*num)+1));
    }
}


int main(){
    int input;

    printf("Digite um numero positivo para gerar a sequencia de collatz: ");
    scanf("%d", &input);

    collatz(input);

    return 0;
}