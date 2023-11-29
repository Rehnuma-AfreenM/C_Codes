/*The length & width of a rectangle and radius of a circle are input through the keyboard. Write a program
to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.*/

#include <stdio.h>
int main()
{
    float l, b, r, ar_r, ar_c, per_r, cc;
    printf("Enter the length ,breadth of the triangle and radius of the circle :\n");
    scanf("%f %f %f", &l, &b, &r);

    ar_r = l * b;
    ar_c = 3.14 * r * r;
    per_r = 2 * (l + b);
    cc = r * 3.14 * 1 / 2;

    printf("The area and perimeter of rectangle are %f units^2 and %f units\n", ar_r, per_r);
    printf("The area and circumference of the circle are %f units^2 and %f units", ar_c, cc);
    return 0;
}
