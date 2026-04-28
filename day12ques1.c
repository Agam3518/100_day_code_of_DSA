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

    // Check if matrix is square
    if(m != n) {
        printf("\nMatrix is not square, so it cannot be symmetric.\n");
        printf("Not a Symmetric Matrix\n");
        return 0;
    }

    int isSymmetric = 1;

    printf("\nChecking symmetry condition matrix[i][j] == matrix[j][i]\n");

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {

            printf("Comparing matrix[%d][%d] = %d and matrix[%d][%d] = %d\n",
                   i, j, matrix[i][j], j, i, matrix[j][i]);

            if(matrix[i][j] != matrix[j][i]) {
                printf("Mismatch found!\n");
                isSymmetric = 0;
                break;
            }
        }
        if(isSymmetric == 0)
            break;
    }

    printf("\nFinal Result:\n");

    if(isSymmetric)
        printf("Symmetric Matrix\n");
    else
        printf("Not a Symmetric Matrix\n");

    return 0;
}