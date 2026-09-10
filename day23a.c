#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i;
        float denominator = 4 * i - 1;

        sum = sum + numerator / denominator;
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}
