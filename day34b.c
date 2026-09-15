#include <stdio.h>

int main() {
    int n, i, position;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &position);

    // Shift elements to the left
    for(i = position; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    printf("Array after deletion: ");
    for(i = 0; i < n - 1; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
