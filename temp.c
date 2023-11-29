/*Temperature of a city in Fahrenheit degrees is input through the keyboard. 
Write a program to convert this temperature into Centigrade degrees.*/

#include <stdio.h>
int main()
{
    float temp, x;

    printf("Enter the temperature in Fahrenheit degrees: ");
    scanf("%f", &temp);

    x = (temp - 32) * 5 / 9;

    printf("%f", x);

    return 0;
}
