#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int nums1[n1];

    printf("Enter elements of first array:\n");
    for(int i = 0; i < n1; i++) {
        scanf("%d", &nums1[i]);
        printf("nums1[%d] = %d\n", i, nums1[i]);
    }

    printf("\nEnter size of second array: ");
    scanf("%d", &n2);

    int nums2[n2];

    printf("Enter elements of second array:\n");
    for(int i = 0; i < n2; i++) {
        scanf("%d", &nums2[i]);
        printf("nums2[%d] = %d\n", i, nums2[i]);
    }

    int freq[1001] = {0};

    printf("\nBuilding frequency array from nums1:\n");

    for(int i = 0; i < n1; i++) {
        freq[nums1[i]]++;
        printf("freq[%d] = %d\n", nums1[i], freq[nums1[i]]);
    }

    printf("\nFinding intersection:\n");

    int result[1000];
    int k = 0;

    for(int i = 0; i < n2; i++) {
        printf("Checking nums2[%d] = %d\n", i, nums2[i]);

        if(freq[nums2[i]] > 0) {
            printf("Match found! Adding %d to result\n", nums2[i]);

            result[k++] = nums2[i];
            freq[nums2[i]]--;

            printf("Decreasing freq[%d] to %d\n",
                   nums2[i], freq[nums2[i]]);
        }
        else {
            printf("No match for %d\n", nums2[i]);
        }
    }

    printf("\nFinal Intersection Array:\n");
    for(int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}