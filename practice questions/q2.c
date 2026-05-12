#include <stdio.h>

int main(){
    int area_circle , volume_cylinder;
    int radius , height;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%d", &height);
    area_circle = 3.14 * radius * radius;
    volume_cylinder = area_circle * height;
    printf("Area of the circle: %d\n", area_circle);
    printf("Volume of the cylinder: %d\n", volume_cylinder);
    return 0;
}