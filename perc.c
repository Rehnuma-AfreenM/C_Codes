/*If the marks obtained by a student in five different subjects are input through the keyboard,
find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum
marks that can be obtained by a student in each subject is 100.*/

#include <stdio.h>
int main()
{
    float sum, per, sub1, sub2, sub3, sub4, sub5, tot = 500;

    printf("Enter the marks in the 5 subjects out of 100 in each :\n ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    per = (sum / tot) * 100;

    printf("The percentage is : %f", per);

    return 0;
}
