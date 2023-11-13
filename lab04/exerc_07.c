#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* str_cat(char* a, char* b){
    int i, j, len_a, len_b;
    char* output;

    len_a = strlen(a);
    len_b = strlen(b);

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
    int i;
    char* a; 
    char* b; 
    char* res;

    a = le_array();
    b = le_array();

    res = str_cat(a, b);

    printf("\nResultado: ");
    for(i=0; i<(strlen(a)+strlen(b)); i++)
        printf("%c", res[i]);

    printf("\n");

    free(a);
    free(b);
    free(res);
}