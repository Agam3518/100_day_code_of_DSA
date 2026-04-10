#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Matrix dimensions: %d x %d\n", m, n);

    int matrix[m][n];

    printf("\nEnter matrix elements:\n");

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    int isToeplitz = 1;

    printf("\nChecking Toeplitz condition (matrix[i][j] == matrix[i-1][j-1])\n");

    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {

            printf("Comparing matrix[%d][%d] = %d with matrix[%d][%d] = %d\n",
                   i, j, matrix[i][j], i-1, j-1, matrix[i-1][j-1]);

            if(matrix[i][j] != matrix[i-1][j-1]) {
                printf("Mismatch found! Not Toeplitz.\n");
                isToeplitz = 0;
                break;
            }
        }
        if(isToeplitz == 0)
            break;
    }

    printf("\nFinal Result:\n");

    if(isToeplitz)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}