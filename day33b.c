#include <stdio.h>

int main() {
    int n, i, element, position;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter elements in sorted order: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Find the correct position
    position = 0;

    while(position < n && a[position] < element) {
        position++;
    }

    // Shift elements to the right
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
