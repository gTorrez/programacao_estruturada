// Guilherme Carvalho Torres 11202021966
# include <stdio.h>

int busca(int valores [], int n, int chave){
    int i;

    for(i=0; i<n; i++)
        if(valores[i] == chave){
            printf("%d", i);
            return i;
        }
    
    printf("-1");
    return -1;    
}


int main(){
    int vetor[10], key, len, i;

    len = 10;

    printf("Digite 10 numeros\n");
    for(i=0; i<len; i++)
        scanf("%d", &vetor[i]);

    printf("digite um valor chave\n");
    scanf("%d", &key);

    busca(vetor, len, key);

    return 0;
}