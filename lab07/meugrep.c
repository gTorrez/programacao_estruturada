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


int is_word_in_line(char* word, char* line){
    int i, j, position, check, len_word;

    position = -1;
    check = 0;
    len_word = str_len(word);

    i = 0;
    j = 0;
    while(line[j] != '\n'){
        position += 1;
        if(line[j] == word[i]){
            check += 1;
            i += 1;
        }
        else{
            check = 0;
            i = 0;
        }

        if(check == len_word)
            return position;
        
        j += 1;
    }

    return -1;
}


void print_line(char* word, char* file, char* line, int n_lines, int pos){
    int i, len_word, len_line;
    
    len_word = str_len(word);
    len_line = str_len(line);

    printf("%s: ", file);
    printf("%d: ", n_lines);
    for(i=0; i<(pos+1-len_word); i++)
        printf("%c", line[i]);
    

    printf("\033[1;31m");
    for(i=i; i<pos+1; i++)
        printf("%c", line[i]);
    printf("\033[1;m"); 

    for(i=i; i<len_line; i++)
        printf("%c", line[i]);
    
}


void search_word(char* word, char* file){
    FILE* arq = fopen(file, "r");
    char line[1000];
    int check, count;

    count = 0;

    printf("\n");
    if(arq == NULL){
        printf("problemas ao ler o arquivo %s", arq);
        return;
    }
    
    else{
        while (fgets(line, 1000, arq)){
            count += 1;
            check = is_word_in_line(word, line);
            if(check != -1)
                print_line(word, file, line, count, check);
            
            check = 0;
        }
    }

    fclose(arq);
}



int main(int argc, char* argv[]){
    int i;

    if(argc < 2){
        printf("informe nome dos arquivos");
        return 1;
    }

    for(i=2; i<argc; i++){
        search_word(argv[1], argv[i]);
    }
    

    return 0;
}