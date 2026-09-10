#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1)
            sum = sum + 1;
        else
            sum = sum + (float)(2 * i - 1) / (2 * i - 2);
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}
