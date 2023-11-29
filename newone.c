// Write a program to calculate the salary.

#include <stdio.h>
int main()
{
    int year;
    char qualification, gender;

    printf("Enter the gender('M' OR 'F'), qualification('P' OR 'G'), year : ");
    scanf("%c %c %d", &gender, &qualification, &year);

    if (gender == 'M' && year >= 10 && qualification == 'P')
    {

        printf("The salary is Rs 15000");
    }

    else if ((gender == 'M' && year >= 10 && qualification == 'G') || (gender == 'M' && year < 10 && qualification == 'P') || (gender == 'F' && year < 10 && qualification == 'P'))
    {
        printf("The salary is Rs 10000");
    }

    else if (gender == 'M' && year < 10 && qualification == 'G')
    {
        printf("The salary is Rs 7000");
    }

    else if (gender == 'F' && year >= 10 && qualification == 'P')
    {
        printf("The salary is Rs 12000");
    }

    else if (gender == 'F' && year >= 10 && qualification == 'G')
    {
        printf("The salary is Rs 9000");
    }

    else if (gender == 'F' && year < 10 && qualification == 'G')
    {
        printf("The salary is Rs 6000");
    }
    return 0;
}