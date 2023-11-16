// Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int str_len(char *s){
    int len;

    len = 0;
    while(s[len] != '\0')
      len += 1;
  
    return len;
}


char* str_cat(char* a, char* b){
    int i, j, len_a, len_b;
    char* output;

    len_a = str_len(a);
    len_b = str_len(b);

    output = malloc((len_a + len_b) * sizeof(char));

    for(i=0; i<len_a; i++)
        output[i] = a[i];
   
    j = 0;
    for(i=i-1; j<len_b-1; i++){
        output[i] = b[j];
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
    int i, len_a, len_b;
    char* a; 
    char* b; 
    char* res;

    a = le_array();
    b = le_array();

    len_a = str_len(a);
    len_b = str_len(b);

    res = str_cat(a, b);

    printf("\nResultado: ");
    for(i=0; i<(len_a+len_b); i++)
        printf("%c", res[i]);

    printf("\n");

    free(a);
    free(b);
    free(res);
}