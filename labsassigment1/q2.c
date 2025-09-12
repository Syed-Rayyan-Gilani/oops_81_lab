#include <stdio.h>

int main() {
    int n, first = 1, second =5, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", first);

        next = first + second;  // calculate next term
        first = second;         // shift first
        second = next;          // shift second
    }

    return 0;
}
