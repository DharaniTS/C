#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int rows, cols;
        scanf("%d %d", &rows, &cols);
        char grid[100][100];

        // Read the grid
        for (int i = 0; i < rows; i++) {
            scanf("%s", grid[i]);
        }

        // Initialize variables to store maximum border in rows and columns
        int maxBorderInRows = 0;
        int maxBorderInCols = 0;

        // Calculate maximum border in rows
        for (int i = 0; i < rows; i++) {
            int border = 0;
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == '#') {
                    border++;
                } else {
                    maxBorderInRows = (border > maxBorderInRows) ? border : maxBorderInRows;
                    border = 0;
                }
            }
            maxBorderInRows = (border > maxBorderInRows) ? border : maxBorderInRows;
        }

        // Calculate maximum border in columns
        for (int j = 0; j < cols; j++) {
            int border = 0;
            for (int i = 0; i < rows; i++) {
                if (grid[i][j] == '#') {
                    border++;
                } else {
                    maxBorderInCols = (border > maxBorderInCols) ? border : maxBorderInCols;
                    border = 0;
                }
            }
            maxBorderInCols = (border > maxBorderInCols) ? border : maxBorderInCols;
        }

        // Print the maximum border
        printf("%d\n", (maxBorderInRows > maxBorderInCols) ? maxBorderInRows : maxBorderInCols);
    }

    return 0;
}
