// Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <stdlib.h>


int str_len(char *s){
    int len;

    len = 0;
    while(s[len] != '\0')
      len += 1;
  
    return len;
}

char* revert(char* s){
    int i, j, len_s;
    char* output;

    len_s = str_len(s);
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
    int i, len_a;
    char* a;
    char* a_reverted;

    a = le_array();
    a_reverted = revert(a);

    len_a = str_len(a);

    for(i=0; i<len_a; i++){
      printf("%c", a_reverted[i]);       
    }
    printf("\n");

    free(a);
    free(a_reverted);

    return 0;
}