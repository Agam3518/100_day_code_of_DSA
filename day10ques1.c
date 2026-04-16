#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    printf("Input string = %s\n", s);

    int left = 0;
    int right = strlen(s) - 1;

    printf("String length = %lu\n", strlen(s));
    printf("Initial left = %d, right = %d\n", left, right);

    int isPalindrome = 1;

    while(left < right) {

        printf("\nComparing s[%d] = %c and s[%d] = %c\n",
               left, s[left], right, s[right]);

        if(s[left] != s[right]) {
            printf("Mismatch found!\n");
            isPalindrome = 0;
            break;
        }

        printf("Characters match.\n");

        left++;
        right--;

        printf("Move pointers -> left = %d, right = %d\n", left, right);
    }

    printf("\nFinal Result:\n");

    if(isPalindrome)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
