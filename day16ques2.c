#include <stdio.h>

void reverse(int arr[], int start, int end) {
    printf("Reversing from index %d to %d\n", start, end);

    while(start < end) {
        printf("Swapping arr[%d]=%d and arr[%d]=%d\n",
               start, arr[start], end, arr[end]);

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Array after reverse step: ");
    for(int i = 0; i <= end + (start - 1 - end); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    int k;
    printf("Enter value of k: ");
    scanf("%d", &k);

    printf("Original k = %d\n", k);

    k = k % n;
    printf("Effective k after mod = %d\n", k);

    printf("\nStep 1: Reverse entire array\n");
    reverse(arr, 0, n - 1);

    printf("\nStep 2: Reverse first k elements\n");
    reverse(arr, 0, k - 1);

    printf("\nStep 3: Reverse remaining elements\n");
    reverse(arr, k, n - 1);

    printf("\nFinal Rotated Array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}