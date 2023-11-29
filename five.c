/*If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, num, i = 1, x = 0;
    printf("Enter a five digit number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        a = num % 10;
        num = num / 10;
        x = x + a;
    }
    printf("%d", x);
    return 0;
}