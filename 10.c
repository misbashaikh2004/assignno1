#include <stdio.h>

int main() {
    float l, b, h, door, window, wall_area, roof_area;
    printf("Enter length, breadth, height: ");
    scanf("%f%f%f", &l, &b, &h);
    printf("Enter door area: ");
    scanf("%f", &door);
    printf("Enter window area: ");
    scanf("%f", &window);

    wall_area = 2 * h * (l + b) - (door + window);
    roof_area = l * b;

    printf("Wall area to paint = %.2f\n", wall_area);
    printf("Roof area to whitewash = %.2f\n", roof_area);
    return 0;
}
