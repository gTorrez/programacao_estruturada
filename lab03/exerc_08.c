//Guilherme Carvalho Torres 11202021966
#include <stdio.h>
#include <string.h>

#define MAX_NOME 50
#define MAX_ALUNOS 40

struct data {
    int dia;
    int mes; 
    int ano;
};

struct aluno{
    char nome[MAX_NOME];
    struct data nasc;
    long long int ra;
};


int procura_palavra(char frase[MAX_NOME], char palavra[MAX_NOME]){
    int len_frase, len_aux, check, i, j, k;
    char aux[MAX_NOME];

    for(i=0; i<MAX_NOME; i++)
        aux[i] = NULL;

    len_frase = strlen(frase);
    check = 1;
    k = 0;

    for(i=0; i<len_frase; i++){
        if((frase[i] < 65) || ((frase[i] > 90) && (frase[i] < 97)) || (frase[i] > 122)){

            if(strcmp(aux, palavra) == 0){
                check = 0;
                return check;
            }
            
            len_aux = strlen(aux);

            for(j=0; j<len_aux; j++)
                aux[j] = NULL;
            k = 0;
        }
        else{
            aux[k] = frase[i];
            k += 1;
        }
    }

    return check;
}


void cadastra_aluno(struct aluno alunos[], int n){
    char spaces[10];

    printf("insira o nome: ");
    fgets(alunos[n].nome, MAX_NOME, stdin);

    printf("insira seu RA: ");
    scanf("%lld", &alunos[n].ra);

    printf("Digite sua data de nascimento: ");
    scanf("%d%d%d", &alunos[n].nasc.dia, &alunos[n].nasc.mes, &alunos[n].nasc.ano);

    printf("\nAluno: %sRA: %lld\nData de nascimento: %d/%d/%d\n", alunos[n].nome, alunos[n].ra, alunos[n].nasc.dia, alunos[n].nasc.mes, alunos[n].nasc.ano);
}


void busca_aluno(struct aluno alunos[], int n){
    int i, check, vet[MAX_ALUNOS];
    char nome_busca[MAX_NOME];

    printf("Digite o nome que deseja buscar: ");
    scanf("%s", &nome_busca);
    
    printf("Alunos econtrados: \n");
    for(i=0; i<n+1; i++){
        check = procura_palavra(alunos[i].nome, nome_busca);
        if(check == 0){
            printf("- %s", alunos[i].nome);
        }
    }
}


void filtra_alunos(struct aluno alunos[], int n){
    int i;
    struct data inicio;
    struct data fim;

    printf("Insira o intervalo: \n");
    printf("Data inicio: ");
    scanf("%d%d%d", &inicio.dia, &inicio.mes, &inicio.ano);
    printf("Data final: ");
    scanf("%d%d%d", &fim.dia, &fim.mes, &fim.ano);

    for(i=0; i<n+1; i++){
        if(((alunos[i].nasc.ano > inicio.ano) || (alunos[i].nasc.ano == inicio.ano && alunos[i].nasc.mes > inicio.mes) ||
            (alunos[i].nasc.ano == inicio.ano && alunos[i].nasc.mes == inicio.mes && alunos[i].nasc.dia > inicio.dia)) &&
            ((alunos[i].nasc.ano < fim.ano) || (alunos[i].nasc.ano == fim.ano && alunos[i].nasc.mes < fim.mes) || 
            (alunos[i].nasc.ano == fim.ano && alunos[i].nasc.mes == fim.mes && alunos[i].nasc.dia < fim.dia))){
                printf("- %s", alunos[i].nome);
            }
    }
}


int main(){
    int i;
    int index_aluno, n_alunos, opcao;
    struct aluno alunos[MAX_ALUNOS];

    index_aluno = 0;

    printf("Digite:\n[1]: cadastro\n[2]: buscar aluno\n[3]: filtrar alunos por data de nascimento\n[4]: mostra opcoes\n[5]: sair\n");
    while(1){
        printf("\nInsira sua acao: ");
        scanf("%d", &opcao);
        getchar();

        if(opcao == 1){
            cadastra_aluno(alunos, index_aluno);
            index_aluno += 1;
        }

        else if(opcao == 2){
            busca_aluno(alunos, index_aluno);
        }

        else if(opcao == 3){
            filtra_alunos(alunos, index_aluno);
        }

        else if(opcao == 4){
            printf("Digite:\n[1]: cadastro\n[2]: buscar aluno\n[3]: filtrar alunos por data de nascimento\n[4]: mostra opcoes\n[5]: sair\n");
        }

        else if(opcao == 5){
            break;
        }

        else{
            printf("Opcao invalida.");
        }
        
    }
       
    return 0;
}

