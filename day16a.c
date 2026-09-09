#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
    } else {
        while (n > 0) {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }

        // Print binary digits in reverse order
        while (i > 0) {
            i--;
            printf("%d", binary[i]);
        }

        printf("\n");
    }

    return 0;
}
