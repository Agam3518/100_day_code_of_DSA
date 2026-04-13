#include <stdio.h>

int main() {
    int n;

    printf("Enter size of matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    // Step 1: Transpose the matrix
    printf("\nTransposing matrix...\n");
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            printf("Swapping matrix[%d][%d] and matrix[%d][%d]\n", i, j, j, i);

            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    printf("\nReversing each row...\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n / 2; j++) {
            printf("Swapping row %d elements: matrix[%d][%d] and matrix[%d][%d]\n", 
                    i, i, j, i, n - j - 1);

            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }

    printf("\nMatrix after 90 degree clockwise rotation:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}