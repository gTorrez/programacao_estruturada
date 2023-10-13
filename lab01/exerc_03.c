// Guilherme Carvalho Torres 11202021966
#include <stdio.h>

int main(){
    int unidade;
    float temp_user, temp_convertida;

    printf("Digite a temperatura a ser convertida.\n");
    scanf("%f", &temp_user);

    printf("Digite a unidade de medida da temperatura.\n[1]:fahrenheit\n[2]:celsius\n");
    scanf("%d", &unidade);

    if (unidade == 1){
        temp_convertida = 5*((temp_user-32)/9);
        printf("Valor convertido para celsius: %.2f", temp_convertida);
    }

    else if(unidade == 2){
        temp_convertida = ((9*temp_user)/5) + 32;
        printf("Valor convertido para fahrenheit: %.2f", temp_convertida);
    }

    else
        printf("Unidade invalida.");   

    return 0;
}