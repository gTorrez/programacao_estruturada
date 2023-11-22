#include <stdio.h>

int binomio(int n, int k){
    if ((k == 0) || (k == n))
        return 1;

    return binomio(n - 1, k - 1) + binomio(n - 1, k);
}

int main() {
    int n, k;
    int res;

    printf("digite n: ");
    scanf("%d", &n);

    printf("digite k: ");
    scanf("%d", &k);

    res = binomio(n, k);

    printf("(%d %d) = %d\n", n, k, res);

    return 0;
}