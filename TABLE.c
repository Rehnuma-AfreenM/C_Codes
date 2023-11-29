// MULTIPLICATION TABLE

#include <stdio.h>
int main()
{
    int x, i, a;
    printf("enter the number : ");
    scanf("%d", &x);
    for (i = 1; i <= 10; i++)
    {
        a = x * i;
        printf("%d * %d = %d\n", x, i, a);
    }
}
