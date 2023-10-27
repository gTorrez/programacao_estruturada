//Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <string.h>

#define MAX 100


void separa_string(char input[], char carac){
    int len, i;

    len = strlen(input);
    for(i=0; i<len; i++){
        if(input[i] == carac)
            break;
        printf("%c", input[i]);
    }
}


int main(){
    int i, len;
    char caractere, frase[100];

    printf("digite um frase: \n");
    fgets(frase, MAX, stdin);

    printf("digite um caractere: \n");
    scanf("%c", &caractere);

    separa_string(frase, caractere);

    return 0;
}