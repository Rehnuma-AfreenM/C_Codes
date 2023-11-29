// PRIME NUMBERS

#include <stdio.h>
int main()
{
    int i, x, a;
    printf("enter the numbers : ");
    scanf("%d", &x);

    for (i = 2; i <= x - 1; i++)
    {
        if (x % i == 0)
        {
            printf("This is not a prime number");
            break;
        }
    }
    if (i == x)
        printf("this is a prime number ");
}
