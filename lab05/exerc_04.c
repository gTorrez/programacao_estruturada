#include <stdio.h>


int str_len(char *s){
    int len;

    len = 0;
    while(s[len] != '\0')
        len += 1;
    
    return len;
}

void inverte(char word[], int inicio, int final){
    if(inicio >= final){
        printf("%s", word);
        return;
    }
    else{
        printf("%c", word[final]);
        return inverte(word, inicio+1, final-1);
    }

}

int main(){
    int len;
    char string[50] = "corinthians";

    //printf("insira uma string: ");
    //scanf("%s", &string);

    len = str_len(string);

    inverte(string, 0, len-1);


    return 0;
}