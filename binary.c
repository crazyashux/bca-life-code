#include <stdio.h>

int main() {
    int mat[5][5], i, j, sum = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("enter no for %d %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i < j)
                sum += mat[i][j];
        }
    }

    printf("sum is %d\n", sum);
    return 0;
}
