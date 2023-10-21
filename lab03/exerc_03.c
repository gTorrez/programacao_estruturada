#include <stdio.h>
#include <string.h>

#define MAX 100

int main(){
    int i, len;
    char input[MAX];

    printf("digite uma frase ou palavra: ");
    fgets(input, MAX, stdin);

    len = strlen(input);

    for(i=0; i<len; i++){
        if((input[i] >= 65) && (input[i] <= 90))
            input[i] += 32;
        
        else if((input[i] >= 97) && (input[i] <= 122))
            input[i] -= 32;
    }

    printf("%s", input);

    return 0;
}