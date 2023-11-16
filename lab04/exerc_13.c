// Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _aluno {
    int ra;
    char nome[1000];
    char sexo;
    int idade;
}* Aluno;


Aluno cadastra_aluno(void){
    Aluno aluno;

    aluno = malloc(sizeof(struct{
                            int ra;
                            char nome[1000];
                            char sexo;
                            int idade;
                        }));

    printf("insira o nome: ");
    fgets(aluno->nome, 1000, stdin);

    printf("insira o RA: ");
    scanf("%d", &aluno->ra);

    getchar();
    printf("insira o sexo [M] ou [F]: ");
    scanf("%c", &aluno->sexo);

    printf("insira a idade: ");
    scanf("%d", &aluno->idade);

    printf("\nNome: %sRA: %d\nSexo: %c\nIdade: %d\n\n", aluno->nome, aluno->ra, aluno->sexo, aluno->idade);
    getchar();

    return aluno;
}


int cmp_strings(char *a, char *b){
    if(*a == '\0' && *b == '\0')
        return 1;
    
    if(*a == *b)
        return cmp_strings(a+1, b+1);

    return 0;
}


int aluno_cmp(Aluno *a, Aluno *b){
    if((*a)->idade == (*b)->idade)
        if((*a)->ra == (*b)->ra)
            if((*a)->sexo == (*b)->sexo)
                if(cmp_strings((*a)->nome,(*b)->nome) == 1)
                    return 1;
    
    return 0;
}


int main(){
    int check;

    Aluno aluno_A = cadastra_aluno();
    Aluno aluno_B = cadastra_aluno();

    check = aluno_cmp(&aluno_A, &aluno_B);
    if(check == 1)
        printf("\nAlunos apontados sao os mesmos\n");
    else
        printf("\nAlunos diferentes\n");
    
    free(aluno_A);
    free(aluno_B);

    return 0;
}