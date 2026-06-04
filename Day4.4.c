#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter start of range");
    scanf("%d", &start);

    printf("Enter end of range");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are\n", start, end);

    for (int num = start; num <= end; num++) {

        int temp = num;
        int digit = 0;
        int arm = 0;
        int t = temp;
        while (t > 0) {
            digit++;
            t = t / 10;
        }

        t = temp;
        while (t > 0) {
            int r = t % 10;
            arm += pow(r, digit);
            t = t / 10;
        }

        if (arm == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
