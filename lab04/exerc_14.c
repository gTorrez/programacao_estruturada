#include <stdio.h>
#include <stdlib.h>


int char_to_int(char c){
    if((c >= 48) && (c <= 57)){
        return c - 48;
    }

    return 0;
}

void map(char array[], int n, int func(char)){
    int i;

    for(i=0; i<n; i++)
        array[i] = func(array[i]);
}


int main(){
    char* nums;
    int i, len;

    printf("Digite a quantidade de chars: ");
    scanf("%d", &len);

    nums = malloc(len * sizeof(char));

    printf("Digite os elementos (entre 0 e 9): ");
    for(i=0; i<len; i++){
        getchar();
        scanf("%c", &nums[i]);
    }
    
    printf("sem map, %c + %c = %d\n", nums[0], nums[len-1], nums[0]+nums[len-1]);
    map(nums, len, char_to_int);
    printf("com map, %d + %d = %d\n", nums[0], nums[len-1], nums[0]+nums[len-1]);

    free(nums);

    return 0;
}