// GROSS SALARY OF EMPLOYEES

#include<stdio.h>
int main()
{
float bs,hra,da,gs;
 printf("enter your basic salary : ");
 scanf("%f",&bs);

 if(bs<1500){
    hra= 0.1*bs;
    da= 0.9*bs;
 }
 else
    hra=500;
    da= bs*98/100;

 gs=bs+hra+da;
 printf("gross salary = Rs.%f\n", gs);
 return 0;
}

