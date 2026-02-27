#include <stdio.h>

int main() {
    int n;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    int isIdentity = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            if(i == j) {
                printf("Checking diagonal element matrix[%d][%d]\n", i, j);
                if(matrix[i][j] != 1) {
                    isIdentity = 0;
                }
            } else {
                printf("Checking non-diagonal element matrix[%d][%d]\n", i, j);
                if(matrix[i][j] != 0) {
                    isIdentity = 0;
                }
            }
        }
    }

    if(isIdentity)
        printf("\nIdentity Matrix\n");
    else
        printf("\nNot an Identity Matrix\n");

    return 0;
}