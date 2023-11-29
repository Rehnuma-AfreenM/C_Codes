#include<stdio.h>

void area();
int main()
{
    area();
    printf("this is your area");

}

void area()
{
    float a,b,c;
    printf("enter the numbers :\n");
    scanf("%f %f",&a,&b);
    c=(a*b)/2;

    printf("the area is %f\n",c);
}
