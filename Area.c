#include <stdio.h>

double area(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    return 3.14159 * radius * radius;
}


int main() {
    double circle_area = area();
    printf("The area of the circle is: %.4f\n", circle_area);
    return 0;
}
