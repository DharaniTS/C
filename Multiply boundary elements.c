#include <stdio.h>

int main() {
    int matrix[5][5];
    int product = 1;
    printf("Enter elements of the 5x5 matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || i == 4 || j == 0 || j == 4) {
                product *= matrix[i][j];
            }
        }
    }

    printf("Product of boundary elements: %d\n", product);

    return 0;
}
