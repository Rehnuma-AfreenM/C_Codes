#include<stdio.h>
int main()
{

    float a,b;
    char c;
    printf("enter the operator +, -, /, * :");
    scanf("%c",&c);
    printf("enter the values of a and b :");
    scanf("%f %f",&a,&b);


    switch(c)
    {
        case '+':
            printf("The addition is %f:\n",a+b);
            break;
        case '-':
            printf("The subtraction is %f:\n",a-b);
            break;
        case '*':
            printf("The multiplication is %f:\n",a*b);
            break;
        case '/':
            printf("The division is %f :\n",a/b);
            break;

        default:
            printf("invalid operator\n");
    }

}
