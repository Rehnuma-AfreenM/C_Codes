#include <stdio.h>
int main()
{
    int x, i, sum = 0;
    printf("enter the number till which you want to sum: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    printf("The sum is : %d\n", sum);
}
