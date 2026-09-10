#include <stdio.h>

int main() {
    int stars[] = {1, 3, 5, 3, 1};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < stars[i]; j++) {
            printf("*\n");
        }

        if (i < 4) {
            printf("\n");
        }
    }

    return 0;
}
