/*The distance between two cities (in km.) is input through the keyboard. Write a program 
to convert and print this distance in meters, feet, inches and centimeters.*/

#include <stdio.h>
int main()
{
    float dis, ans;
    char c;

    printf("In which you want to convert ('m', 'c', 'f', 'i') : ");
    scanf("%c", &c);

    printf("Enter the distance between the two cities in Km : ");
    scanf("%f", &dis);

    if (c == 'm')
    {
        ans = dis * 1000;
    }

    else if (c == 'c')
    {
        ans = dis * 100000;
    }

    else if (c == 'f')
    {
        ans = dis * 3280.8399;
    }

    else if (c == 'i')
    {
        ans = dis * 39370.0787;
    }
    printf("%f", ans);

    return 0;
}
