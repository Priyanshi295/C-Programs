#include <stdio.h>

int main() {
    int n, i, search;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(a[i] == search) {
            printf("Element found at index %d", i);
            return 0;
        }
    }

    printf("Element not found");

    return 0;
}
