// PROFIT AND LOSS

#include<stdio.h>
int main()
{
float cp,sp, profit,loss;
printf("enter the cost price and selling price : " );
scanf("%f%f",&cp,&sp);
    if (sp>cp){
        profit = sp-cp;
        printf("The profit is Rs.%f",profit);
    }
    else{
        loss = cp-sp;
        printf("The lose is Rs.%f",loss);
    }
}
