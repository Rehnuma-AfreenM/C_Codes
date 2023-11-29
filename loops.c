#include <stdio.h>
int main()
{
    int i, hrs, ohrs;
    float rate = 12.00, pay;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter the working hours : ");
        scanf("%d", &hrs);

        ohrs = hrs - 40;

        printf("The working overhours are : %d hours\n", ohrs);

        if (ohrs > 0)
        {
            pay = rate * ohrs;
            printf("The pay is : %f", pay);
        }
    }
}
