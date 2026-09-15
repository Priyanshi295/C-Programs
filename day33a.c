#include <stdio.h>

int main() {
    int n, i, search;
    int low, high, mid;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements in sorted order: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == search) {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if(search > a[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element not found");

    return 0;
}
