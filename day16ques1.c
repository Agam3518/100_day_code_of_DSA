#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Array size = %d\n", n);

    int arr[n];
    int visited[n];

    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
        printf("arr[%d] = %d, visited[%d] = %d\n", i, arr[i], i, visited[i]);
    }

    printf("\nStarting frequency calculation...\n");

    for(int i = 0; i < n; i++) {

        if(visited[i] == 1) {
            printf("Skipping arr[%d] = %d (already counted)\n", i, arr[i]);
            continue;
        }

        int count = 1;
        printf("\nChecking element arr[%d] = %d\n", i, arr[i]);

        for(int j = i + 1; j < n; j++) {
            printf("Comparing arr[%d] = %d with arr[%d] = %d\n", i, arr[i], j, arr[j]);

            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
                printf("Match found! Count = %d, Marking visited[%d] = 1\n", count, j);
            }
        }

        printf("Final count for %d = %d\n", arr[i], count);
        printf("%d:%d ", arr[i], count);
    }

    printf("\nFrequency calculation completed.\n");

    return 0;
}
  