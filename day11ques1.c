#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Matrix dimensions: %d x %d\n", m, n);

    int A[m][n], B[m][n], C[m][n];

    printf("\nEnter elements of first matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
            printf("A[%d][%d] = %d\n", i, j, A[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
            printf("B[%d][%d] = %d\n", i, j, B[i][j]);
        }
    }

    printf("\nPerforming matrix addition:\n");

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {

            printf("Adding A[%d][%d] = %d and B[%d][%d] = %d\n",
                   i, j, A[i][j], i, j, B[i][j]);

            C[i][j] = A[i][j] + B[i][j];

            printf("C[%d][%d] = %d\n", i, j, C[i][j]);
        }
    }

    printf("\nResultant Matrix after Addition:\n");

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}