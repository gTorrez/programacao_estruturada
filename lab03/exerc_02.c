#include <stdio.h>
#include <string.h>

#define MAX 100

int main(){
    int i, j, len, maior;
    char sequencia[100];

    printf("digite a string com alguma sequencia de zero\n");
    fgets(sequencia, MAX, stdin);

    len = strlen(sequencia);
    maior = 0;

    for(i=0; i<len; i++){
        if(sequencia[i] == '0'){
            j += 1;
            if(j > maior)
                maior = j;
        }
        else{
            j = 0;
        }
    }

    printf("a maior sequencia de zeros foi de ordem %d", maior);

    return 0;
}