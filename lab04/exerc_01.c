#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n;
    float soma, media, valor_temp;

    printf("Digite um inteiro n: ");
    scanf("%d", &n);

    soma = 0;
    printf("Digite %d valores: ", n);

    for(i=0; i<n; i++){
        scanf("%f", &valor_temp);
        soma += valor_temp;
      }
    
    media = soma / n;
    printf("Media: %.2f", media);

    return 0;
}