#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* revert(char* s){
    int i, j, len_s;
    char* output;

    len_s = strlen(s);
    output = malloc(len_s * sizeof(char));

    j = 0;
    for(i=(len_s-1); i>=0; i--){
      output[j] = s[i];
      j += 1;
    }

    return output;
}

char* le_array(){
    int len;
    char* input;

    printf("digite tamanho da string: ");
    scanf("%d", &len);
    getchar();

    input = malloc(len * sizeof(char));
    printf("string: ");
    fgets(input, len, stdin);
    

    return input;
}


int main(){ 
    int i;
    char* a;
    char* a_reverted;

    a = le_array();
    a_reverted = revert(a);

    for(i=0; i<strlen(a); i++){
      printf("%c", a_reverted[i]);       
    }
    printf("\n");

    free(a);
    free(a_reverted);

    return 0;
}