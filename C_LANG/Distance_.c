#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;

    // Get coordinates of the two points
    printf("Enter x1 and y1 for the first point: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2 and y2 for the second point: ");
    scanf("%d %d", &x2, &y2);

    // Calculate distance using the Euclidean formula
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance between the points: %.2f\n", distance);

    return 0;
}
//=== OUTPUT ===
// Enter x1 and y1 for the first point: 1 2
// Enter x2 and y2 for the second point: 3 4
// Distance between the points: 2.83
