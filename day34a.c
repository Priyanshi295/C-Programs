#include <stdio.h>

int main() {
    int n, i, position, element;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position and element: ");
    scanf("%d %d", &position, &element);

    for(i = n; i > position; i--) {
        a[i] = a[i - 1];
    }

    a[position] = element;

    printf("Array after insertion: ");
    for(i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
