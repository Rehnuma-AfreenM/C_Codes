#include<stdio.h>
int main()
{
    int quantity;
    float cost,total, discount;

    printf("give the quantity and cost ");
    scanf("%d %f",&quantity,&cost);

if(quantity>1000){
    discount = (0.1* cost);
}
else
    printf("no discount");
printf("discount is %f", discount);
}


