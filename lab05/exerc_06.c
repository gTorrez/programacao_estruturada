#include <stdio.h>


void collatz(int num){
    if(num == 1){
        return;
    }

    else if(num % 2 == 0){
        printf("%d ", num/2);
        return(collatz(num/2));
    }

    else{
        printf("%d ", (3*num)+1);
        return(collatz((3*num)+1));
    }
}


int main(){
    int input;

    scanf("%d", &input);
    collatz(input);

    return 0;
}