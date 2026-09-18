#include <stdio.h>

int main() {
    int matrix[10][10], sum[10] = {0};
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
