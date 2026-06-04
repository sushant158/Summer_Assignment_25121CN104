#include <stdio.h>

int main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Enter the position of Fibonacci term");
    scanf("%d", &n);

    if (n == 0) {
        printf("Fibonacci term at position %d is 0", n);
    }
    else if (n == 1) {
        printf("Fibonacci term at position %d is 1", n);
    }
    else {
        for (int i = 2; i <= n; i++) {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
        printf("Fibonacci term at position %d is %d", n, secondTerm);
    }

    return 0;
}
