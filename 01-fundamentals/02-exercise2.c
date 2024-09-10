/*
The length & breadth of a rectangle and radius of a circle are input
through the keyboard. Write a program to calculate the area and
perimeter of the rectangle, and the area and circumference of the
circle.

Rectange:
- area = l * w;
- p = 2 * (l + w)

Circle:
- PI 3.14159
- area = π×rSquare(r * r)
- c = 2×π×r
*/

#include<stdio.h>
#define PI 3.14159

int main()
{
    float length, width, rArea, perimeter;
    float radius, cArea, circumference;

    printf("Enter the length and width of rectangle:\n");
    scanf("%f", &length);
    scanf("%f", &width);

    rArea = length * width;
    perimeter = 2 * (length + width);

    printf("The area of the rectangle with length of %f and width of %f is %f\n", length, width, rArea);
    printf("The perimeter is %f\n", perimeter);

    printf("\nEnter the radius of a circle: \n");
    scanf("%f", &radius);

    cArea = PI * (radius * radius);
    circumference = 2 * PI * radius;

    printf("The area of the circle with radius %f is %f\n", radius, cArea);
    printf("The circumference is %f\n", circumference);

    return 0;
}
