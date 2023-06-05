#include <stdio.h>
#include <stdbool.h>

bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize) {
    if (coordinatesSize <= 2) {
        return true; // If the array has 0 or 1 point, it is considered a straight line.
    }

    int x0 = coordinates[0][0];
    int y0 = coordinates[0][1];
    int x1 = coordinates[1][0];
    int y1 = coordinates[1][1];

    for (int i = 2; i < coordinatesSize; i++) {
        int xi = coordinates[i][0];
        int yi = coordinates[i][1];

        // Check if the slopes between consecutive points are equal.
        if ((y1 - y0) * (x1 - xi) != (y1 - yi) * (x1 - x0)) {
            return false;
        }
    }

    return true;
}

int main() {
    int coordinates[][2] = {{1, 1}, {2, 2}, {3, 3}, {4, 4}}; // Example coordinates

    int coordinatesSize = sizeof(coordinates) / sizeof(coordinates[0]);
    int coordinatesColSize = sizeof(coordinates[0]) / sizeof(coordinates[0][0]);

    bool result = checkStraightLine((int**)coordinates, coordinatesSize, &coordinatesColSize);

    if (result) {
        printf("The given points form a straight line.\n");
    } else {
        printf("The given points do not form a straight line.\n");
    }

    return 0;
}
