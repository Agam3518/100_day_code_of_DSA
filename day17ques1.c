#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Array size = %d\n", n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    printf("\nInitial max = %d\n", max);
    printf("Initial min = %d\n", min);

    for(int i = 1; i < n; i++) {
        printf("\nChecking arr[%d] = %d\n", i, arr[i]);

        if(arr[i] > max) {
            printf("New max found! %d > %d\n", arr[i], max);
            max = arr[i];
            printf("Updated max = %d\n", max);
        }

        if(arr[i] < min) {
            printf("New min found! %d < %d\n", arr[i], min);
            min = arr[i];
            printf("Updated min = %d\n", min);
        }
    }

    printf("\nFinal Result:\n");
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}