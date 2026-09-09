#include <stdio.h>

int main() {
    long long binary;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        digit = binary % 10;

        if (digit == 0)
            printf("1");
        else
            printf("0");

        binary = binary / 10;
    }

    printf("\n");

    return 0;
}
