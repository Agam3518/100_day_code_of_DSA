#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Matrix size: %d x %d\n", m, n);

    int matrix[m][n];
    int sum = 0;

    printf("\nEnter matrix elements:\n");

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            printf("Stored matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    int min = (m < n) ? m : n;
    printf("\nMinimum dimension for diagonal = %d\n", min);

    printf("\nCalculating primary diagonal sum:\n");

    for(int i = 0; i < min; i++) {
        printf("Adding matrix[%d][%d] = %d\n", i, i, matrix[i][i]);
        sum += matrix[i][i];
        printf("Current sum = %d\n", sum);
    }

    printf("\nFinal Sum of Primary Diagonal = %d\n", sum);

    return 0;
}